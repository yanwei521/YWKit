//
//  NSNumber+MGTAddition.m
//  MGTCategories
//
//  Created by YW on 2018/6/7.
//  Copyright © 2018年 MIGU VIDEO Co., Ltd. All rights reserved.
//

#import "NSNumber+MGTAddition.h"
#import "NSString+MGTAddition.h"

@implementation NSNumber (MGTAddition)

+ (NSNumber *)mgt_numberWithString:(NSString *)string {
    NSString *str = [[string mgt_stringByTrim] lowercaseString];
    if (!str || !str.length) {
        return nil;
    }
    
    static NSDictionary *dic;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        dic = @{@"true" :   @(YES),
                @"yes" :    @(YES),
                @"false" :  @(NO),
                @"no" :     @(NO),
                @"nil" :    [NSNull null],
                @"null" :   [NSNull null],
                @"<null>" : [NSNull null]};
    });
    NSNumber *num = dic[str];
    if (num != nil) {
        if (num == (id)[NSNull null]) return nil;
        return num;
    }
    
    // hex number
    int sign = 0;
    if ([str hasPrefix:@"0x"]) sign = 1;
    else if ([str hasPrefix:@"-0x"]) sign = -1;
    if (sign != 0) {
        NSScanner *scan = [NSScanner scannerWithString:str];
        unsigned num = -1;
        BOOL suc = [scan scanHexInt:&num];
        if (suc)
            return [NSNumber numberWithLong:((long)num * sign)];
        else
            return nil;
    }
    // normal number
    NSNumberFormatter *formatter = [[NSNumberFormatter alloc] init];
    [formatter setNumberStyle:NSNumberFormatterDecimalStyle];
    return [formatter numberFromString:string];
}

+ (BOOL)mgt_isValidNumber:(id)num {
    return (num && [num isKindOfClass:[NSNumber class]]);
}

@end
