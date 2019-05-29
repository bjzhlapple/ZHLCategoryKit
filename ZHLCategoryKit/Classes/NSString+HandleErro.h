//
//  NSString+HandleErro.h
//  小学学习APP
//
//  Created by shenyang-mac on 2018/12/21.
//  Copyright © 2018 shenyang-mac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (HandleErro)
/**
 *  请求失败 错误转提示
 *
 *  @param error 错误信息
 *
 *  @return 汉字字符串
 */
+ (NSString *)getErroStr:(NSError *)error;
@end

NS_ASSUME_NONNULL_END
