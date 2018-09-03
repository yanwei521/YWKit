//
//  UIDevice+MGTAddition.h
//  MGTCategories
//
//  Created by YW on 2018/6/26.
//  Copyright © 2018年 MIGU VIDEO Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIDevice (MGTAddition)

/// 设备系统版本 (e.g. 8.1)
+ (double)systemVersion;

/// 设备是否是 iPad/iPad mini.
@property (nonatomic, readonly) BOOL isPad;

/// 该设备是否是模拟器.
@property (nonatomic, readonly) BOOL isSimulator;

/// 是否设备被破解.
@property (nonatomic, readonly) BOOL isJailbroken;

/// 设备的机器模型  (e.g. "iPhone6,1" "iPad4,6)"
/// @see http://theiphonewiki.com/wiki/Models
@property (nullable, nonatomic, readonly) NSString *machineModel;

/// 设备的机器模型名称. (e.g. "iPhone 5s" "iPad mini 2)"
/// @see http://theiphonewiki.com/wiki/Models
@property (nullable, nonatomic, readonly) NSString *machineModelName;

@end
