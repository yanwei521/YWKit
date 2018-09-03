//
//  NSDate+MGTAddition.h
//  MGTCategories
//
//  Created by YW on 2018/6/26.
//  Copyright © 2018年 MIGU VIDEO Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (MGTAddition)

/**
 返回表示此日期的格式化字符串.
 e.g. @"yyyy-MM-dd HH:mm:ss"
 @return 返回表示格式化日期字符串的NString.
 */
- (nullable NSString *)mgt_stringWithFormat:(NSString *)format;

/**
 返回表示此日期的格式化字符串.
 e.g. @"yyyy-MM-dd HH:mm:ss"
 @param timeZone  所需时区.
 @param locale    所需的区域设置.
 @return 返回表示格式化日期字符串的NString.
 */
- (nullable NSString *)mgt_stringWithFormat:(NSString *)format
                               timeZone:(nullable NSTimeZone *)timeZone
                                 locale:(nullable NSLocale *)locale;

/**
 返回一个以ISO8601格式表示此日期的字符串.
 e.g. "2010-07-09T16:13:30+12:00"
 @return ISO8601中表示格式化日期字符串的NString.
 */
- (nullable NSString *)mgt_stringWithISOFormat;

/**
 返回使用给定字符串解析的日期.
 @param dateString The string to parse.
 @param format     The string's date format.
 @return 使用格式解释的字符串的日期表示形式。如果不能解析字符串，则返回零.
 */
+ (nullable NSDate *)mgt_dateWithString:(NSString *)dateString format:(NSString *)format;

/**
 返回使用给定字符串解析的日期.
 
 @param dateString The string to parse.
 @param format     The string's date format.
 @param timeZone   The time zone, can be nil.
 @param locale     The locale, can be nil.

 @return 返回使用格式解释的字符串的日期表示形式。如果不能解析字符串，则返回nil.
 */
+ (nullable NSDate *)mgt_dateWithString:(NSString *)dateString
                             format:(NSString *)format
                           timeZone:(nullable NSTimeZone *)timeZone
                             locale:(nullable NSLocale *)locale;

/**
 返回从使用ISO8601格式给定字符串解析的日期.
 
 @param dateString The date string in ISO8601 format. e.g. "2010-07-09T16:13:30+12:00"

 @return 返回使用格式解释的字符串的日期表示形式。如果不能解析字符串，则返回nil.
 */
+ (nullable NSDate *)mgt_dateWithISOFormatString:(NSString *)dateString;

@end
