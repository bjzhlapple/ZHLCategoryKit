//
//  UIImage+Fix.h
//  XXXXAPP
//
//  Created by zhl on 2019/1/7.
//  Copyright © 2019 ZHIHUILIU. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (Fix)
//修复原图
- (UIImage *)fixOrientation;
//计算图片大小
+(NSString *)calulateImageFileSize:(UIImage *)sourceImage;
- (UIImage *)compressToSize:(CGSize)size;
+(NSData *)compressWithLengthLimit:(NSUInteger)maxLength sourceImage:(UIImage *)sourceImage;
+(NSData *)compressToSize:(CGSize)size sourceImage:(UIImage*)sourceImage maxLength:(NSInteger)maxLength;

@end

NS_ASSUME_NONNULL_END
