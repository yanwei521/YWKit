//
//  NSData+MGTAddition.h
//  MGTCategories
//
//  Created by YW on 2018/6/26.
//  Copyright © 2018年 MIGU VIDEO Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (MGTAddition)

/**
 返回的MD5加密 -小写String.
 */
- (NSString *)mgt_md5String;

/**
 返回的MD5加密 -data.
 */
- (NSData *)mgt_md5Data;

/**
 返回的sha1加密 -小写String.
 */
- (NSString *)mgt_sha1String;

/**
 返回的sha1加密 -data.
 */
- (NSData *)mgt_sha1Data;

/**
 返回的sha256加密 -小写String.
 */
- (NSString *)mgt_sha256String;

/**
 返回的sha256加密 -data.
 */
- (NSData *)mgt_sha256Data;

/**
 返回的sha512加密 -小写String.
 */
- (NSString *)mgt_sha512String;

/**
 返回的sha512加密 -data.
 */
- (NSData *)mgt_sha512Data;

/**
 返回UTF8编码.
 */
- (nullable NSString *)mgt_utf8String;

/**
 返回base64编码.
 */
- (nullable NSString *)mgt_base64EncodedString;

/**
 Returns an NSData from base64 encoded string.
 
 @warning This method has been implemented in iOS7.
 
 @param base64EncodedString  The encoded string.
 */
+ (nullable NSData *)mgt_dataWithBase64EncodedString:(NSString *)base64EncodedString;

/**
 返回一个用于自我的解码NSDictionary或NSArray。
 如果发生错误，则返回零。
 */
- (nullable id)mgt_jsonValueDecoded;

@end
