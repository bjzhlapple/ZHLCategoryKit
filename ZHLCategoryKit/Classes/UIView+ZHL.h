//
//  UIView+ZHL.h
//  ZHLTutor
//
//  Created by 沧海小鱼 on 15-1-16.
//  Copyright (c) 2015年 智慧流. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (ZHL)

@property (assign, nonatomic) CGFloat x;
@property (assign, nonatomic) CGFloat y;
@property (assign, nonatomic) CGFloat width;
@property (assign, nonatomic) CGFloat height;
@property (assign, nonatomic) CGSize size;
@property (assign, nonatomic) CGPoint origin;
@property (assign, nonatomic) CGFloat bottom;
@property (assign, nonatomic) CGFloat right;

// 设置圆角
@property (assign ,nonatomic) CGFloat cornerRadius;

@end
