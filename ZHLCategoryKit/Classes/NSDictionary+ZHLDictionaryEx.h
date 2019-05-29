//
//  NSDictionary+ZHLDictionaryEx.h
//  ZCategory
//
//  Created by shenyang-mac on 2019/1/7.
//  Copyright © 2019 shenyang-mac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (ZHLDictionaryEx)

/**
 实例字典，转成json字符串
 
 @return json形式的字符串
 */
- (NSString *)ZHLDictionaryConertToJsonString;
@end

NS_ASSUME_NONNULL_END
