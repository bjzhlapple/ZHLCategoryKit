//
//  NSObject+ShareInstance.h
//  小学学习APP
//
//  Created by shenyang-mac on 2018/12/23.
//  Copyright © 2018 shenyang-mac. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ZHL_SINGLETON_CLASSH(methodName) \
\
+ (instancetype)methodName;


#define ZHL_SINGLETON_CLASSM(methodName) \
\
+ (instancetype)methodName { \
static id instance = nil; \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
instance = [[self alloc] init]; \
}); \
return instance; \
}

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (ShareInstance)

@end

NS_ASSUME_NONNULL_END
