//
//  UILabel+ZHLLabel.h
//  ZHLMinJiaoEnglish
//
//  Created by shenyang on 16/1/19.
//  Copyright © 2016年 BeiJingZhiHuiLiu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZDefineExtension.h"
extern NSString *const ZHLFontHandWriteName;
extern NSString *const ZHLFONTXIANGHSAO;
extern NSString *const ABCFONT_Normal;
extern NSString *const ABCFONT_Bold;
extern NSString *const ABCFONT_Bolder;
extern NSString *const FONTCHNKAITI;
@interface UILabel (ZHLLabel)
/**
 语文 华文楷体
 */
- (void)CHNFontWithSize:(CGFloat)size ;
/**
 ABCTime字体
 */
- (void)ABCFontWithSize:(CGFloat)size ;
- (void)ABCBoldFontWithSize:(CGFloat)size ;
- (void)ABCBolderFontWithSize:(CGFloat)size ;

/**
 手写字体设置
 */
- (void)ZFontWithHandWriteSize:(CGFloat)size;

- (void)ZFontXiangshaoWithSize:(CGFloat)size;

- (void)ZFontWithSize:(CGFloat)size;

- (void)ZBoldFontWithSize:(CGFloat)size;
/**
 *  设置label 的行间距
 *
 *  @param margin        间距大小
 *  @param str           label.text内容
 *  @param textAlignment 格式 left center 或者 right
 */
- (void)setlineMarigin:(CGFloat)margin
             andString:(NSString *)str
      andTextAlignment:(NSTextAlignment)textAlignment;
/**
 *  设置label 的行间距
 *
 *  @param margin        间距大小
 *  @param attStr        富文本 label.text内容
 *  @param textAlignment 格式 left center 或者 right
 */
- (void)setlineMarigin:(CGFloat)margin
             andAttStr:(NSMutableAttributedString *)attStr
      andTextAlignment:(NSTextAlignment)textAlignment;
/**
 *  设置label不同颜色
 *
 *  @param totalStr   text
 *  @param dicContent 第一个元素 放置范围标记1 第二个元素放置范围标记2 从头开始第一个元素放置@“”
                        从x开始到末尾 第二元素放置@“”
 *  @param colors     第一个元素放置 需要变色的颜色 第二个元素放其他颜色
 *  @param centerSize 变色的label的尺寸
 */
- (void)setDifferentColorsWithText:(id)totalStr
                           content:(NSArray<NSString *>*)dicContent
                            colors:(NSArray<UIColor *>*)colors
                  centerStringSize:(CGFloat)centerSize forntName:(NSString *)fontname;
/**
 *  多一个设置行间距
 */
- (void)setDifferentColorsWithText:(id)totalStr
                           content:(NSArray<NSString *>*)dicContent
                            colors:(NSArray<UIColor *>*)colors
                  centerStringSize:(CGFloat)centerSize
                         forntName:(NSString *)fontname
                        linemargin:(CGFloat)linemargin
                     textAlignment:(NSTextAlignment)textAlignment;
@end
