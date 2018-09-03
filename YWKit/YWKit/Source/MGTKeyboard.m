//
//  MGTKeyboard.m
//  MiguTV
//
//  Created by 王旭 on 2017/11/30.
//  Copyright © 2017年 Migu Video Technology. All rights reserved.
//

#import "MGTKeyboard.h"
#import <UIKit/UIKit.h>

@interface MGTKeyboard()


@end

@implementation MGTKeyboard

static MGTKeyboard *keyboard = nil;

#pragma mark - Life cycle

+ (instancetype)shareKeyboard
{
    static dispatch_once_t onceToken;
    
    dispatch_once(&onceToken, ^{
        keyboard = [[super allocWithZone:nil] init];
    });
    
    return keyboard;
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
    return [self shareKeyboard];
}

- (id)init
{
    self = [super init];
    if (self)
    {
        NSNotificationCenter *center = [NSNotificationCenter defaultCenter];
        [center  addObserver:self selector:@selector(keyboardDidShow:)  name:UIKeyboardDidShowNotification  object:nil];
        [center addObserver:self selector:@selector(keyboardDidHide)  name:UIKeyboardWillHideNotification object:nil];
        _keyboardIsVisible = NO;
    }
    return self;
}

- (void)keyboardDidShow:(NSNotification *)keyboardNotification
{
    _keyboardIsVisible = YES;
    CGRect endFrame = [(NSValue *)keyboardNotification.userInfo[UIKeyboardFrameEndUserInfoKey] CGRectValue];
    _keyboardHight = endFrame.size.height;
}

- (void)keyboardDidHide
{
    _keyboardIsVisible = NO;
    _keyboardHight = 0.0f;
}

- (BOOL)keyboardIsVisible
{
    return _keyboardIsVisible;
}

@end
