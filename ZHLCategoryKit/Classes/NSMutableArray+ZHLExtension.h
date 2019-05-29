//
//  NSMutableArray+ZHLExtension.h
//  ZHLEnglishTeacher
//
//  Created by newuser on 2018/3/15.
//  Copyright © 2018年 yang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (ZHLExtension)

/** 删除数组中不符合block条件的元素，即只保留符合block条件的元素 */
- (void)zhl_performSelect:(BOOL (^)(id obj))block;

/** 删除数组中符合block条件的元素 */
- (void)zhl_performReject:(BOOL (^)(id obj))block;

/** 数组中的元素变换为自己的block映射元素 */
- (void)zhl_performMap:(id (^)(id obj))block;

@end
