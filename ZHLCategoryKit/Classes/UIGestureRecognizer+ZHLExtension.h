//
//  UIGestureRecognizer+ZHLExtension.h
//  ZHLEnglishTeacher
//
//  Created by newuser on 2018/3/14.
//  Copyright © 2018年 yang. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^ZHLGestureBlock)(id gestureRecognizer);

@interface UIGestureRecognizer (ZHLExtension)

+ (instancetype)ZHL_gestureRecongnizerWithBlock:(ZHLGestureBlock)block;

@end
