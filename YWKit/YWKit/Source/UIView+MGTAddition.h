//
//  UIView+XMGExtension.h
//  migu
//
//  Created by 咪咕 on 16/3/18.
//  Copyright © 2016年 咪咕. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (MGTAddition)

@property (nonatomic, assign)CGFloat x;    ///< Shortcut for frame.origin.x.
@property (nonatomic, assign)CGFloat y;    ///< Shortcut for frame.origin.y

@property (nonatomic) CGFloat left;        ///< Shortcut for frame.origin.x.
@property (nonatomic) CGFloat top;         ///< Shortcut for frame.origin.y
@property (nonatomic) CGFloat right;       ///< Shortcut for frame.origin.x + frame.size.width
@property (nonatomic) CGFloat bottom;      ///< Shortcut for frame.origin.y + frame.size.height
@property (nonatomic) CGFloat width;       ///< Shortcut for frame.size.width.
@property (nonatomic) CGFloat height;      ///< Shortcut for frame.size.height.
@property (nonatomic) CGFloat centerX;     ///< Shortcut for center.x
@property (nonatomic) CGFloat centerY;     ///< Shortcut for center.y
@property (nonatomic) CGPoint origin;      ///< Shortcut for frame.origin.
@property (nonatomic) CGSize  size;        ///< Shortcut for frame.size.

@end

@interface UIView (HUD)



//- (CGFloat)x;
//- (void)setX:(CGFloat)x;

/**再分类中声明 @property，只会生成方法的声明，不会生成方法的实现和带有_下划线的成员变量*/

#pragma mark - Hud

- (void)showHudWithString:(NSString *)text;

- (void)showHudWithString:(NSString *)text forSeconds:(NSTimeInterval)seconds;

- (void)showString:(NSString *)text forSeconds:(NSTimeInterval)seconds;

- (void)hideHud;

- (void)hideHudAfterSeconds:(NSTimeInterval)interval;

#pragma mark - Appearance
- (void)setupCornerWithRadius:(CGFloat)radius;

@end
