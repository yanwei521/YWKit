//
//  NSNumber+MGTAddition.h
//  MGTCategories
//
//  Created by YW on 2018/6/7.
//  Copyright © 2018年 MIGU VIDEO Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNumber (MGTAddition)

/**
 返回Number.
 Valid format: @"12", @"12.345", @" -0xFF", @" .23e99 "...
 @return  NSNumber / occurs.
 */
+ (nullable NSNumber *)mgt_numberWithString:(NSString *)string;

+ (BOOL)mgt_isValidNumber:(id)num;

@end
