//
//  UIView+Loading.h
//  小学学习APP
//
//  Created by shenyang-mac on 2018/12/20.
//  Copyright © 2018 shenyang-mac. All rights reserved.
//

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface UIView (Loading)
- (void)showLoadingView;
- (void)showLoadingWithContent:(NSString *)content;

- (void)hideLoading;
@end

NS_ASSUME_NONNULL_END
