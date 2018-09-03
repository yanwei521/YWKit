//
//  NSObject+MGTAddition.h
//  MGTCategories
//
//  Created by YW on 2018/6/26.
//  Copyright © 2018年 MIGU VIDEO Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (MGTAddition)

/**
 在一个类中交换两个实例方法的实现. Dangerous, be careful.
 
 @param originalSel   Selector 1.
 @param newSel        Selector 2.
 @return              YES if swizzling succeed; otherwise, NO.
 */
+ (BOOL)mgt_swizzleInstanceMethod:(SEL)originalSel with:(SEL)newSel;

/**
 在一个类中交换两个类方法的实现. Dangerous, be careful.
 
 @param originalSel   Selector 1.
 @param newSel        Selector 2.
 @return              YES if swizzling succeed; otherwise, NO.
 */
+ (BOOL)mgt_swizzleClassMethod:(SEL)originalSel with:(SEL)newSel;

/**
 Associate one object to `self`, as if it was a strong property (strong, nonatomic).
 
 @param value   The object to associate.
 @param key     The pointer to get value from `self`.
 */
- (void)mgt_setAssociateValue:(nullable id)value withKey:(void *)key;

/**
 Associate one object to `self`, as if it was a weak property (week, nonatomic).
 
 @param value  The object to associate.
 @param key    The pointer to get value from `self`.
 */
- (void)mgt_setAssociateWeakValue:(nullable id)value withKey:(void *)key;

/**
 从“self”中获取相关的值.
 
 @param key The pointer to get value from `self`.
 */
- (nullable id)mgt_getAssociatedValueForKey:(void *)key;

/**
 删除所有相关的值.
 */
- (void)mgt_removeAssociatedValues;

/**
 返回的类名.
 */
+ (NSString *)mgt_className;

/**
 返回中的类名.
 
 @discussion Apple has implemented this method in NSObject(NSLayoutConstraintCallsThis),
 but did not make it public.
 */
- (NSString *)mgt_className;

@end
