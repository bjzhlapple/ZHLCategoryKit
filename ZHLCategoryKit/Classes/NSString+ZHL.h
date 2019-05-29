//
//  NSString+ZHL.h
//  ZHLTutor
//
//  Created by 沧海小鱼 on 15-1-15.
//  Copyright (c) 2015年 智慧流. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreText/CoreText.h>
@interface NSString (ZHL)

- (CGSize)sizeWithFont:(UIFont *)font lineSpacing:(CGFloat)lineSpacing constrainedToSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode isBold:(BOOL)isBold;
- (CGFloat)widthWithFont:(UIFont *)font constrainedToSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode;
- (CGFloat)widthWithFont:(UIFont *)font lineSpacing:(CGFloat)lineSpacing constrainedToSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode;
- (CGFloat)widthWithFont:(UIFont *)font lineSpacing:(CGFloat)lineSpacing constrainedToSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode isBold:(BOOL)isBold;
- (CGFloat)heightWithFont:(UIFont *)font constrainedToSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode;
- (CGFloat)heightWithFont:(UIFont *)font lineSpacing:(CGFloat)lineSpacing constrainedToSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode;
- (CGFloat)heightWithFont:(UIFont *)font lineSpacing:(CGFloat)lineSpacing constrainedToSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode isBold:(BOOL)isBold;

- (NSString *)content;

//修正英文，
- (NSString *)correctTheEnglish;
/**
 *  是否包含一个字符串
 *
 *  @param containStr 范围字符串
 *
 *  @return yes包含 NO 不包含
 */
- (BOOL)isContains:(NSString *)containStr;

-(NSAttributedString *)changeWithColor:(UIColor *)color Font:(UIFont *)font ;
-(NSAttributedString*)getAttributedStringWithLineSpace:(CGFloat)lineSpace wordSpace:(CGFloat)wordSpace;
/**
 实例JSON字符串，转换成为字典
 
 @return 目标字典
 */
- (NSDictionary *)ZHLJsonConvertToDictionary;
+(NSString *)replaceWithStr:(NSString *)str AndReg:(NSString *)reg;


/**
 在网址后面添加参数
 
 @param param 参数名称
 @param vaule 值
 @return 新的网址
 */
- (NSString *)webUrlAddParam:(NSString *)param WithVaule:(NSString *)vaule;

/**
 网址后 添加businessid
 */
-(NSString *)webAddBusinessID:(NSInteger)businessID;
@end
