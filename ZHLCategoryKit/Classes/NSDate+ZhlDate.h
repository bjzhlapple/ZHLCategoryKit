//
//  NSDate+ZhlDate.h
//  ZCategory
//
//  Created by shenyang-mac on 2019/5/9.
//  Copyright © 2019 shenyang-mac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDate (ZhlDate)


/**
 比较date 比参数date 更早
 
 @param anotherDate 参数date
 @return bool
 */
-(BOOL)dateIsEarlierThanDate:(NSDate *)anotherDate;

/**
 比较date 比参数date 更晚
 
 @param anotherDate 参数date
 @return bool
 */
-(BOOL)dateIsLaterThanDate:(NSDate *)anotherDate;
/**
 通过date 返回的日期字符串
 
 @param dateFormate yyyy-MM-dd hh:mm:ss 可选
 @return 2019-10-01 10:32:25
 */
-(NSString *)getDateStringWithFormat:(NSString *)dateFormate ;
/**
 返回一个星期的字符串
 
 @return 星期一 || 星期二 ...
 */
-(NSString *)getWeekDayString;
@end

NS_ASSUME_NONNULL_END
