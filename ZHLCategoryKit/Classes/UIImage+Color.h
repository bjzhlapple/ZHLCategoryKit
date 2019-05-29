//
//  UIImage+Color.h
//  Copyright (c) 2018.12
//

#import <UIKit/UIKit.h>
//#import "UIColor+Extend.h"

@interface UIImage (Color)

+(UIImage *)imageFillColor:(UIColor *)color;
/**
 返回一个传递颜色的image
 
 @param color 需要的颜色
 @param size 需要的尺寸
 @return 返回img
 */
+(UIImage *)imageFillColor:(UIColor *)color size:(CGSize)size;

- (UIImage *) imageWithTintColor:(UIColor *)tintColor;
- (UIImage *) imageWithGradientTintColor:(UIColor *)tintColor;
/**
 返回一个渐变色图片 gradientRamp渐变
 
 @param colors 颜色阶梯数组
 @param frame 尺寸
 @return 图片
 */
+ (UIImage *)imageGradientRampWithColors:(NSArray*)colors frame:(CGRect)frame;


@end
