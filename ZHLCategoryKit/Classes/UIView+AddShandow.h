//
//  UIView+AddShandow.h
//  ZHLEnglishTeacher
//
//  Created by user on 2017/9/13.
//  Copyright © 2017年 yang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (AddShandow)

-(void)addShandow ;
-(void)addShandowTop;
-(void)addShandowCenter ;
-(void)addShandowBottom ;

-(void)addShandowWithNoRemove ;

-(void)removeShandow ;
-(void)addShandowTopNoRemove ;
-(void)addShandowBottomNoRemove;
-(void)addShandowNoBottom ;

/**
 为一组需要添加阴影中的view中的 某个view添加阴影

 @param index 当前是第几个 从0开始
 @param maxCount 总共多少个
 */
-(void)addShandowAndInxex:(NSInteger)index MaxIndex:(NSInteger)maxCount  ;

-(void)addShandowNoLineAndIndex:(NSInteger)index MaxCount:(NSInteger)maxCount;
-(void)addShandowTopNoLine ;
-(void)addShandowCenterNoLine ;
-(void)addShandowBottomNoline ;

-(void)addShandowWithNoRemoveForPinglun ;

-(void)addshandowWithSuper:(UIView *)superView Color:(UIColor *)color  Radiu:(CGFloat)radiu;
@end
