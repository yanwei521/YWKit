//
//  NSData+MGTAddition.h
//  MGTCategories
//
//  Created by zhaohao on 2018/6/26.
//  Copyright © 2018年 MIGU VIDEO Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (MGTAddition)

/**
 Returns a lowercase NSString for md5 hash.
 */
- (NSString *)mgt_md5String;

/**
 Returns an NSData for md5 hash.
 */
- (NSData *)mgt_md5Data;

/**
 Returns a lowercase NSString for sha1 hash.
 */
- (NSString *)mgt_sha1String;

/**
 Returns an NSData for sha1 hash.
 */
- (NSData *)mgt_sha1Data;

/**
 Returns a lowercase NSString for sha256 hash.
 */
- (NSString *)mgt_sha256String;

/**
 Returns an NSData for sha256 hash.
 */
- (NSData *)mgt_sha256Data;

/**
 Returns a lowercase NSString for sha512 hash.
 */
- (NSString *)mgt_sha512String;

/**
 Returns an NSData for sha512 hash.
 */
- (NSData *)mgt_sha512Data;

/**
 Returns string decoded in UTF8.
 */
- (nullable NSString *)mgt_utf8String;

/**
 Returns an NSString for base64 encoded.
 */
- (nullable NSString *)mgt_base64EncodedString;

/**
 Returns an NSData from base64 encoded string.
 
 @warning This method has been implemented in iOS7.
 
 @param base64EncodedString  The encoded string.
 */
+ (nullable NSData *)mgt_dataWithBase64EncodedString:(NSString *)base64EncodedString;

/**
 Returns an NSDictionary or NSArray for decoded self.
 Returns nil if an error occurs.
 */
- (nullable id)mgt_jsonValueDecoded;

@end
