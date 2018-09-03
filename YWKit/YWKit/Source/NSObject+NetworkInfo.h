//
//  NSObject+NetworkInfo.h
//  MGTShortVideo
//
//  Created by 王旭 on 2018/8/10.
//  Copyright © 2018年 MIGU VIDEO Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (NetworkInfo)

+ (BOOL)isConnectionAvailable;

+ (NSString *)getNetWorkType;

@end
