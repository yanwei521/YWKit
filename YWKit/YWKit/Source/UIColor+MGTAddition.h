//
//  UIColor+MGTAddition.h
//  MGTCategories
//
//  Created by YW on 2018/6/7.
//  Copyright © 2018年 MIGU VIDEO Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (MGTAddition)

/**
 颜色在RGB颜色空间中的红色分量值。
 此属性的值是在“0”到“1”范围内的浮点。
 */
@property (nonatomic, readonly) CGFloat red;

/**
 颜色在RGB颜色空间中的绿色分量值。
 此属性的值是在“0”到“1”范围内的浮点。
 */
@property (nonatomic, readonly) CGFloat green;

/**
 RGB颜色空间中的蓝色分量值。
 此属性的值是在“0”到“1”范围内的浮点。
 */
@property (nonatomic, readonly) CGFloat blue;

/**
 颜色在HSB颜色空间中的色调分量值。
 此属性的值是在“0”到“1”范围内的浮点。
 */
@property (nonatomic, readonly) CGFloat hue;

/**
 颜色在HSB颜色空间中的饱和分量值。
 此属性的值是在“0”到“1”范围内的浮点。
 */
@property (nonatomic, readonly) CGFloat saturation;

/**
 颜色在HSB颜色空间中的亮度分量值。
 此属性的值是在“0”到“1”范围内的浮点。
 */
@property (nonatomic, readonly) CGFloat brightness;

/**
 颜色的α成分值。
 此属性的值是在“0”到“1”范围内的浮点。
 */
@property (nonatomic, readonly) CGFloat alpha;

// default alpha = 1.0f
+ (UIColor *)mgt_colorWithHex:(UInt32)colorHex;

+ (UIColor *)mgt_colorWithHex:(UInt32)colorHex opacity:(CGFloat)opacity;

@end
