//
//  NSAttributedString+ZHLAttributedString.h
//  ZCategory
//
//  Created by shenyang-mac on 2019/5/24.
//  Copyright © 2019 shenyang-mac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSAttributedString (ZHLAttributedString)

@end
@interface NSMutableAttributedString (ZHLAttributedString)
- (void)zhl_setAttribute:(NSString *)name value:(id)value range:(NSRange)range;
@end
NS_ASSUME_NONNULL_END
