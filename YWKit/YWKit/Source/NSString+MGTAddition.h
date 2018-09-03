//
//  NSString+MGTAddition.h
//  MGTCategories
//
//  Created by YW on 2018/6/7.
//  Copyright © 2018年 MIGU VIDEO Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (MGTAddition)

/**
 Returns a lowercase NSString for md5 hash.
 */
- (nullable NSString *)mgt_md5String;

/**
 Returns a lowercase NSString for sha1 hash.
 */
- (nullable NSString *)mgt_sha1String;

/**
 Returns a lowercase NSString for sha256 hash.
 */
- (nullable NSString *)mgt_sha256String;

/**
 Returns a lowercase NSString for sha512 hash.
 */
- (nullable NSString *)mgt_sha512String;

/**
 Returns an NSString for base64 encoded.
 */
- (nullable NSString *)mgt_base64EncodedString;

/**
 Returns an NSString from base64 encoded string.
 @param base64EncodedString The encoded string.
 */
+ (nullable NSString *)mgt_stringWithBase64EncodedString:(NSString *)base64EncodedString;

/**
 URL encode a string in utf-8.
 @return the encoded string.
 */
- (NSString *)mgt_stringByURLEncode;

/**
 URL decode a string in utf-8.
 @return the decoded string.
 */
- (NSString *)mgt_stringByURLDecode;

/**
 Escape commmon HTML to Entity.
 Example: "a>b" will be escape to "a&gt;b".
 */
- (NSString *)mgt_stringByEscapingHTML;

#pragma mark - Drawing

/**
 Returns the size of the string if it were rendered with the specified constraints.
 
 @param font          The font to use for computing the string size.
 
 @param size          The maximum acceptable size for the string. This value is
 used to calculate where line breaks and wrapping would occur.
 
 @param lineBreakMode The line break options for computing the size of the string.
 For a list of possible values, see NSLineBreakMode.
 
 @return              The width and height of the resulting string's bounding box.
 These values may be rounded up to the nearest whole number.
 */
- (CGSize)mgt_sizeForFont:(UIFont *)font size:(CGSize)size mode:(NSLineBreakMode)lineBreakMode;

/**
 Returns the width of the string if it were to be rendered with the specified
 font on a single line.
 
 @param font  The font to use for computing the string width.
 
 @return      The width of the resulting string's bounding box. These values may be
 rounded up to the nearest whole number.
 */
- (CGFloat)mgt_widthForFont:(UIFont *)font;

/**
 Returns the height of the string if it were rendered with the specified constraints.
 
 @param font   The font to use for computing the string size.
 
 @param width  The maximum acceptable width for the string. This value is used
 to calculate where line breaks and wrapping would occur.
 
 @return       The height of the resulting string's bounding box. These values
 may be rounded up to the nearest whole number.
 */
- (CGFloat)mgt_heightForFont:(UIFont *)font width:(CGFloat)width;

#pragma mark - Utilities

/**
 Returns a new UUID NSString
 e.g. "D1178E50-2A4D-4F1F-9BD3-F6AAB00E06B1"
 */
+ (NSString *)mgt_stringWithUUID;

/**
 Trim blank characters (space and newline) in head and tail.
 @return the trimmed string.
 */
- (NSString *)mgt_stringByTrim;

/**
 nil, @"", @"  ", @"\n" will Returns NO; otherwise Returns YES.
 */
- (BOOL)mgt_isNotBlank;

/**
 nil, @"", will returns NO; otherwise returns YES.
 */
+ (BOOL)mgt_isNotEmptyString:(id)obj;

/**
 Try to parse this string and returns an `NSNumber`.
 @return Returns an `NSNumber` if parse succeed, or nil if an error occurs.
 */
- (NSNumber *)mgt_numberValue;

/**
 Returns an NSData using UTF-8 encoding.
 */
- (NSData *)mgt_dataValue;

/**
 Returns NSMakeRange(0, self.length).
 */
- (NSRange)mgt_rangeOfAll;

/**
 Returns an NSDictionary/NSArray which is decoded from receiver.
 Returns nil if an error occurs.
 
 e.g. NSString: @"{"name":"a","count":2}"  => NSDictionary: @[@"name":@"a",@"count":@2]
 */
- (id)mgt_jsonValueDecoded;

@end
