//
//  UIView+SJViewTransition.h
//  SJViewTransitionDemo
//
//  Created by Jaesun on 16/10/8.
//  Copyright © 2016年 S.J. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, SJLayerTransitionType) {

    
    SJViewTransitionTypeFade,                   // 淡化效果
    SJViewTransitionTypeMoveIn,                 // 推入效果
    SJViewTransitionTypePush,                   // 移出效果
    SJViewTransitionTypeReveal,                 // 退出效果
    SJViewTransitionTypeCube,                   // 3D 效果
    SJViewTransitionTypeSuckEffect,             // 吮吸效果
    SJViewTransitionTypeOglFlip,                // 翻转效果
    SJViewTransitionTypeRippleEffect,           // 波纹效果
    SJViewTransitionTypePageCurl,               // 翻页效果
    SJViewTransitionTypePageUncurl,             // 反翻页效果
    SJViewTransitionTypeCameraIrisHollowOpen,   // 开镜头效果
    SJViewTransitionTypeCameraIrisHollowClose,  // 关镜头效果

};

typedef NS_ENUM(NSUInteger, SJLayerTransitionSubtype) {
   
    SJViewTransitionSubtypeFromRight,
    SJViewTransitionSubtypeFromLeft,
    SJViewTransitionSubtypeFromBottom,
    SJViewTransitionSubtypeFromTop,
};


@interface UIView (SJViewTransition)



- (void)addLayerTransitionWith:(SJLayerTransitionType)type subtype:(SJLayerTransitionSubtype)subtype;

- (void)addViewAnimationTransition:(UIViewAnimationTransition)transition AnimationCurve:(UIViewAnimationCurve)curve completion:(void(^)(void))completion;

@end
