//
//  ZColorExtension.h
//  ZCatagory
//
//  Created by shenyang-mac on 2018/12/24.
//  Copyright © 2018 shenyang-mac. All rights reserved.
//

#ifndef ZColorExtension_h
#define ZColorExtension_h
//自定义颜色 + 透明度
#define rgba(r,g,b,a)               [UIColor colorWithRed:(double)r/255.0f green:(double)g/255.0f blue:(double)b/255.0f alpha:a]
//自定义颜色
#define rgb(r,g,b)               [UIColor colorWithRed:(double)r/255.0f green:(double)g/255.0f blue:(double)b/255.0f alpha:1]
#define APP_COLOR_BACKGROUND_Fake rgb(246,246,246)
#define APP_COLOR_BACKGROUND [UIColor whiteColor]
#endif /* ZColorExtension_h */




//颜色
#define ZHLColorBlack               ZRGB(3, 3, 10, 1.0)
#define ZHLColorDarkGray            ZRGB(140, 140, 140, 1.0)
#define ZHLColorLightGray           ZRGB(153, 153, 153, 1.0)
#define ZHLColorLighterGray         ZRGB(235, 235, 235, 1.0)
#define ZHLColorGrayBackground      ZRGB(238, 238, 238, 1.0)
#define ZHLColorClear               [UIColor clearColor]
#define ZHLColorBorderColor         ZRGB(158 , 158, 158, 0.3f)
#define ZHLColorTextBlack           ZRGB(51, 51, 51, 1.0)//总框架字体 黑色
#define ZHLColorTextGray            ZRGB(153 , 152, 119, 1.0)//总框架字体 灰色

#define ZHLColorBlue                ZRGB(47 , 151, 255, 1.0) //系统蓝色
#define ZHLColorRed              ZRGB(255, 90, 0, 1.0) //橙色
#define ZHLColorBottomLineGray      ZRGB(221,221,221,1) //底部线条颜色
#define ZHLColorBtnBgGray           ZRGB(221,221,221,1) //底部线条颜色
#define ZHLColorYellow              ZRGB(255,253,196,1.0f)
//需要更换
#define ZHLColorLightGreen          ZRGB(119,211,0,1.0f)//背景浅绿
#define ZHLColorTextGreen           ZRGB(47, 83, 0, 1.0)
#define ZHLBackgroundColor          ZRGB(243,248,254,1.0f)
#define ZHLColorDarkGreen           ZRGB(74,130,3,1.0f)//深绿
#define ZHLColorGreen               ZRGB(47, 203, 111, 1.0)//智慧流绿色      典型：注册登录 【下一步】颜色
#define ZHLColorOrange              ZRGB(254, 108, 0, 1.0)//
//缓存路径
#define ZCACHE_PATH                         [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]


//屏幕宽度
//#define ZScreenWidth                        ( [[UIScreen mainScreen] bounds].size.width <  [[UIScreen mainScreen] bounds].size.height ? [[UIScreen mainScreen] bounds].size.width : [[UIScreen mainScreen] bounds].size.height )
////屏幕高度
//#define ZScreenHeight                       ( [[UIScreen mainScreen] bounds].size.width > [[UIScreen mainScreen] bounds].size.height ? [[UIScreen mainScreen] bounds].size.width : [[UIScreen mainScreen] bounds].size.height )
//横屏时的宽高
#define ZScreenLandscapeWidth               [UIScreen ZScreenHeight]
#define ZScreenLandscapeHeight              [UIScreen ZScreenWidth]
#define screenLandscapeRatio                (ZScreenLandscapeWidth/1280)

//状态栏高度
#define ZStatusBarHeight                    [UIApplication sharedApplication].statusBarFrame.size.height
#define ZTabBarHeight                       (ZIsiPhoneX ? 83.0f :49.0f) //navbar 高度
#define ZNavBarHeight                       (ZIsiPhoneX ? 88.0f : 64.0f)
#define ZBottomHeight                       (ZIsiPhoneX ? 34.0f : 0)
#define ZNaviBarHeight                      49.0f

#define ZHLColorABCFont             ZRGB(118, 77, 45, 1)
#define ZHLColorABCRED              ZRGB(162 ,58, 63, 1)

#define ZNIBWithClass(a)                    [UINib nibWithNibName:NSStringFromClass([a class]) bundle:nil]
#define ZClassName(a)                       NSStringFromClass([a class])
#define ZRemoveObserve(a)                   [[NSNotificationCenter defaultCenter] removeObserver:a];
