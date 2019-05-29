//
//  UIViewController+ExtendMethod.h
//  ZCatagory
//
//  Created by shenyang-mac on 2018/12/23.
//  Copyright © 2018 shenyang-mac. All rights reserved.
//


#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (ExtendMethod)
/**
 全局导航栏的 返回
 */
- (void)defaultBack;
/**
 控制器将要消失，编辑按钮取消
 */
+(void)load;

/**
 通过 StoryBoard 获取控制器
 
 @param stroyboard stroyboard
 @param identifier identifier
 @return UIViewController
 */
+ (UIViewController *)controllerFromStoryBoard:(NSString *)stroyboard withIdentifier:(NSString *)identifier;
/**
 旋转屏幕
 
 @param isLandscapeRight 是否朝着右面
 */
- (void)zhlRotateScreen:(BOOL)isLandscapeRight;
/**
 根据responder 获取当前控制器
 
 @return 控制器
 */
+ (UIViewController *)getCurrentVC;
@end

NS_ASSUME_NONNULL_END
