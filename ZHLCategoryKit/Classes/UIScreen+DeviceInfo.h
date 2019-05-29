//
//  UIScreen+DeviceInfo.h
//  小学学习APP
//
//  Created by shenyang-mac on 2018/12/21.
//  Copyright © 2018 shenyang-mac. All rights reserved.
//

#import <UIKit/UIKit.h>

//判断是否是ipad
#define Zis_IPAD ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
//判断iPhone4系列
#define Zis_IPHONE4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) && !Zis_IPAD : NO)
//判断iPhone5系列
#define Zis_IPHONE5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) && !Zis_IPAD : NO)
//判断iPhone6 6s 7系列
#define Zis_IPHONE6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) && !Zis_IPAD : NO)
//判断iPhone6p 6sp 7p系列
#define Zis_IPHONE6PLUS ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) && !Zis_IPAD : NO)
//判断iPhoneX，Xs（iPhoneX，iPhoneXs）
#define Zis_IPHONE_X ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !Zis_IPAD : NO)
//判断iPhoneXr
#define Zis_IPHONE_XR ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !Zis_IPAD : NO)
//判断iPhoneXsMax
#define Zis_IPHONE_Xs_Max ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size)&& !Zis_IPAD : NO)

//判断iPhoneX所有系列
#define Zis_PhoneXSeries (Zis_IPHONE_X || Zis_IPHONE_XR || Zis_IPHONE_Xs_Max)
#define Z_Height_NavContentBar 44.0f
#define Z_Height_StatusBar (Zis_PhoneXSeries? 44.0 : 20.0)
#define Z_Height_NavBar (Zis_PhoneXSeries ? 88.0 : 64.0)
#define Z_Height_TabBar (Zis_PhoneXSeries ? 83.0 : 49.0)

NS_ASSUME_NONNULL_BEGIN

@interface UIScreen (DeviceInfo)
+ (CGFloat)ZScreenWidth;
+ (CGFloat)ZScreenHeight;
+ (BOOL)isiPhoneXSeries;
+ (CGFloat)ZTabBarHeight;
+ (CGFloat)ZNavBarHeight;
+ (CGFloat)ZBottomHeight;
@end

NS_ASSUME_NONNULL_END
