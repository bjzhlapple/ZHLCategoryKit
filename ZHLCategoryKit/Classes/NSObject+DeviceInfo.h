//
//  NSObject+DeviceInfo.h
//  小学学习APP
//
//  Created by shenyang-mac on 2018/12/20.
//  Copyright © 2018 shenyang-mac. All rights reserved.
//

#import <Foundation/Foundation.h>





NS_ASSUME_NONNULL_BEGIN

@interface NSObject (DeviceInfo)
/**
 *  获得当前版本号(NSInteger类型)
 */
+ (NSInteger)getVersionCode;
/**
 获得一个string类型的code 1.0.0.1
 
 @return 1.0.0.1
 */
+ (NSString *)getVersionString;
@end

NS_ASSUME_NONNULL_END
