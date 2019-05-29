//
//  UIImage+ZHL.h
//  ZHLTutor
//
//  Created by 沧海小鱼 on 15-1-13.
//  Copyright (c) 2015年 智慧流. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ZHL)
+ (UIImage *)originImageWithName:(NSString *)name ;
/**
 *  返回一张自由拉伸的图片
 */
+ (UIImage *)resizedImageWithName:(NSString *)name;
+ (UIImage *)resizedImageWithName:(NSString *)name left:(CGFloat)left top:(CGFloat)top;
//画圆
+ (UIImage *)imageWithR:(CGFloat)r G:(CGFloat)g B:(CGFloat)b Rect:(CGRect)rect ;

+ (UIImage*)imageFromColors:(NSArray*)colors andFrame:(CGRect)frame;


+ (UIImage*)imageFromHeightColors:(NSArray*)colors andFrame:(CGRect)frame;
+ (UIImage *)circleImageWithImage:(UIImage *)image;
@end
