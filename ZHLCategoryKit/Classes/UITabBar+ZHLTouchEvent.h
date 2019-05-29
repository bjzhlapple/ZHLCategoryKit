//
//  UITabBar+ZHLTouchEvent.h
//  ZHLEnglishTeacher
//
//  Created by user on 2017/9/25.
//  Copyright © 2017年 yang. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol ZHLTabBarEventDelegate <NSObject>

-(UIView * )hiteViewWithPoint:(CGPoint)point Event:(UIEvent*)event ;

@end




@interface UITabBar (ZHLTouchEvent)
@property(nonatomic,weak)id<ZHLTabBarEventDelegate>zdelegate ;
@end
