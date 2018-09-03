//
//  NSObject+MGMessage.m
//
//  Created by YW on 2018/4/21.
//  Copyright © 2018年 projectNavigation. All rights reserved.
//

#import "NSObject+MGMessage.h"
#import "Masonry.h"

@implementation NSObject(MGMessage)

- (void)showString:(NSString *)text forSeconds:(NSTimeInterval)seconds offset:(CGPoint)offset{
    if (!text || ![text isKindOfClass:[NSString class]]) {
        return;
    }
    UIView *backView = [[UIApplication sharedApplication].keyWindow viewWithTag:100000011];
    [backView removeFromSuperview];
    [NSObject cancelPreviousPerformRequestsWithTarget:self selector:@selector(alertHidden:) object:backView];
    
    if (!backView) {
        backView = [[UIView alloc] init];
        backView.tag = 100000011;
        backView.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.65];
        backView.layer.cornerRadius = 5.0f;
    }
    [[UIApplication sharedApplication].keyWindow addSubview:backView];
    [[UIApplication sharedApplication].keyWindow bringSubviewToFront:backView];
    
    UILabel *label = [backView viewWithTag:100000012];
    if (!label) {
        label = [[UILabel alloc] init];
        label.tag = 100000012;
        label.font = [UIFont systemFontOfSize:13];
        label.textColor = [UIColor whiteColor];
        label.numberOfLines = 0;
        label.textAlignment = NSTextAlignmentCenter;
        [backView addSubview:label];
    }
    label.text = text;
    CGSize size = [label.text boundingRectWithSize:CGSizeMake(320, 1000) options:NSStringDrawingUsesLineFragmentOrigin | NSStringDrawingUsesFontLeading attributes:@{NSFontAttributeName:[UIFont systemFontOfSize:13.0]} context:nil].size;
    
    float width;
    if (size.width + 30 > 320) {
        width = 320;
    }else{
        width = size.width + 30;
    }
    [label mas_remakeConstraints:^(MASConstraintMaker *make) {
        make.height.equalTo(@(size.height + 5));
        make.width.equalTo(@(width - 27));
        make.top.equalTo(backView.mas_top).offset(10);
        make.bottom.equalTo(backView.mas_bottom).offset(-10);
        make.leading.equalTo(backView).offset(11);
        make.trailing.equalTo(backView).offset(-11);
    }];
    
    [backView mas_remakeConstraints:^(MASConstraintMaker *make) {
        make.centerX.equalTo([UIApplication sharedApplication].keyWindow.mas_centerX).offset(offset.x);
        make.centerY.equalTo([UIApplication sharedApplication].keyWindow.mas_centerY).offset(offset.y);
    }];
    
    [[UIApplication sharedApplication].keyWindow layoutIfNeeded];
    [self performSelector:@selector(alertHidden:) withObject:backView afterDelay:seconds];
}

- (void)showString:(NSString *)text forSeconds:(NSTimeInterval)seconds
{
    [self showString:text forSeconds:seconds offset:CGPointMake(0, 0)];
}

- (void)alertHidden:(UIView *)backView{
    [backView removeFromSuperview];
}

@end
