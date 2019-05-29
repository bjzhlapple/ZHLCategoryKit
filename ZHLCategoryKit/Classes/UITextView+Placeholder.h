//
//  UITextView+Placeholder.h
//  TextViewPlaceholder
//
//  Created by 沈增光 on 2017/11/20.
//  Copyright © 2017年 沈增光. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextView (Placeholder)

/**
 textView placeholder text
 */
@property (nonatomic ,copy)NSString *placeholder;
/**
 textView placeholder textColor
 */
@property (nonatomic ,strong)NSDictionary *placeholderAttributes;
/**
 the max inputLenth
 */
@property (nonatomic ,assign)NSInteger maxInputLength;

- (NSString *)textViewCurrentText;

@end
