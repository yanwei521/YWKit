//
//  NSObject+NetworkInfo.h
//  MGTShortVideo
//
//  Created by YW on 2018/8/10.
//  Copyright © 2018年 MIGU VIDEO Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (NetworkInfo)
/**
 是否有网略可用
 */
+ (BOOL)isConnectionAvailable;
/**
 获取网略状态
 */
+ (NSString *)getNetWorkType;

@end
