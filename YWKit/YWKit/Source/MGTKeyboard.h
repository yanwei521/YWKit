//
//  MGTKeyboard.h
//  MiguTV
//
//  Created by 王旭 on 2017/11/30.
//  Copyright © 2017年 Migu Video Technology. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MGTKeyboard : NSObject

@property (nonatomic, assign) BOOL keyboardIsVisible;    // 键盘显隐状态
@property (nonatomic, assign) float keyboardHight;    // 键盘显隐状态

+ (instancetype)shareKeyboard;

@end
