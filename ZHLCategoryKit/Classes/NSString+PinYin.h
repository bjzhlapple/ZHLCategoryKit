//
//  NSString+PinYin.h
//  ZHLEnglishTeacher
//
//  Created by iosNew on 2017/9/26.
//  Copyright © 2017年 yang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (PinYin)
/**
 获取字符串的拼音
 */
- (NSString *)pinYin;
/**
 获取字符串的拼音大写首字母
 */
- (NSString *)pinYinTitle;
@end
