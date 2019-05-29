//
//  UIViewController+TimeDuration.h
//  ZHLMinJiaoEnglish
//
//  Created by iosNew on 2017/11/28.
//  Copyright © 2017年 BeiJingZhiHuiLiu. All rights reserved.
//

#import <UIKit/UIKit.h>
//app将要进入前台
UIKIT_EXTERN NSString *const kZapplicationWillResignActive;
//已经进入前台
UIKIT_EXTERN NSString *const  kZapplicationDidBecomeActive;
/**
 给控制器添加计时功能相关方法
 */
@interface UIViewController (TimeDuration)
/**
 在window上显示时间的label

 @return label
 */
- (UILabel *)labelOnWindow;

#pragma mark - 定时器方式计时
/**
 从零开始计时
 */
- (void)timeDurationStartTimer;
/**
 从特定的时长开始计时
 
 @param time 初始时长
 */
- (void)timeDurationStartTimerWithTime:(NSInteger)time;
/**
 暂停或继续计时
 */
- (void)timeDurationPauseTimer;
/**
 是否正在计时
 */
- (BOOL)isTimeDurationTimerRun;
/**
 停止计时

 @return 当前定时器的总时长
 */
- (NSInteger)timeDurationStopTimer;
/**
 获取当前已经计时的时长
 */
- (NSInteger)timeDurationTotalTime;

#pragma mark - 比较开始时间和结束时间方式计时
/**
 开始计时：设置开始时间

 @param identifier 计时唯一标识符
 */
- (void)timeDurationStartWithIdentifier:(NSString *)identifier;
/**
 结束计时：设置结束时间，

 @param identifier 计时唯一标识符
 @return 计时时长
 */
- (NSInteger)timeDurationEndWithIdentifier:(NSString *)identifier;
/**
 清空开始时间和结束时间

 @param identifier 计时唯一标识符
 */
- (void)timeDurationClearDateWithIdentifier:(NSString *)identifier;
@end
