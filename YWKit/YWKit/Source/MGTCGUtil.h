//
//  MGTCGUtil.h
//  MGTCategories
//
//  Created by YW on 2018/6/26.
//  Copyright © 2018年 MIGU VIDEO Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

/// Convert CALayer's gravity string to UIViewContentMode.
UIViewContentMode MGTCAGravityToUIViewContentMode(NSString *gravity);

/// Convert UIViewContentMode to CALayer's gravity string.
NSString * MGTUIViewContentModeToCAGravity(UIViewContentMode contentMode);
