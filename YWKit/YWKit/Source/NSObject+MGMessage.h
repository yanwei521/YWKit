//
//  NSObject+MGMessage.h

//
//  Created by YW on 2018/4/21.
//  Copyright © 2018年 projectNavigation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSObject(MGMessage)

/**
 * @brief 统一提示样式.默认剧中
 * @param text      提示文案
 *        seconds   持续时间
 */
- (void)showString:(NSString *)text forSeconds:(NSTimeInterval)seconds;

/**
 * @brief 统一提示样式.距屏幕中心点偏移（x，y）
 * @param text      提示文案
 *        seconds   持续时间
 *        offset    距屏幕中心点偏移（x，y）。
 */
- (void)showString:(NSString *)text forSeconds:(NSTimeInterval)seconds offset:(CGPoint)offset;

@end
