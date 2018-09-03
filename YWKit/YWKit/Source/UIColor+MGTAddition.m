//
//  UIColor+MGTAddition.m
//  MGTCategories
//
//  Created by YW on 2018/6/7.
//  Copyright © 2018年 MIGU VIDEO Co., Ltd. All rights reserved.
//

#import "UIColor+MGTAddition.h"

@implementation UIColor (MGTAddition)

+ (UIColor *)mgt_colorWithHex:(UInt32)colorHex
{
    CGFloat red = ((colorHex & 0xFF0000) >> 16) / 256.0;
    CGFloat green = ((colorHex & 0xFF00) >> 8) / 256.0;
    CGFloat blue = (colorHex & 0xFF) / 256.0;
    
    UIColor *colorObject = [UIColor colorWithRed:red green:green blue:blue alpha:1.0f];
    return colorObject;
}

+ (UIColor *)mgt_colorWithHex:(UInt32)colorHex opacity:(CGFloat)opacity
{
    CGFloat red = ((colorHex & 0xFF0000) >> 16) / 256.0;
    CGFloat green = ((colorHex & 0xFF00) >> 8) / 256.0;
    CGFloat blue = (colorHex & 0xFF) / 256.0;
    
    UIColor *colorObject = [UIColor colorWithRed:red green:green blue:blue alpha:opacity];
    return colorObject;
}

- (CGFloat)red {
    CGFloat r = 0, g, b, a;
    [self getRed:&r green:&g blue:&b alpha:&a];
    return r;
}

- (CGFloat)green {
    CGFloat r, g = 0, b, a;
    [self getRed:&r green:&g blue:&b alpha:&a];
    return g;
}

- (CGFloat)blue {
    CGFloat r, g, b = 0, a;
    [self getRed:&r green:&g blue:&b alpha:&a];
    return b;
}

- (CGFloat)alpha {
    return CGColorGetAlpha(self.CGColor);
}

- (CGFloat)hue {
    CGFloat h = 0, s, b, a;
    [self getHue:&h saturation:&s brightness:&b alpha:&a];
    return h;
}

- (CGFloat)saturation {
    CGFloat h, s = 0, b, a;
    [self getHue:&h saturation:&s brightness:&b alpha:&a];
    return s;
}

- (CGFloat)brightness {
    CGFloat h, s, b = 0, a;
    [self getHue:&h saturation:&s brightness:&b alpha:&a];
    return b;
}

@end
