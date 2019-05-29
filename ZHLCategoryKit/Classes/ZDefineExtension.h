//
//  ZDefineExtension.h
//  ZCatagory
//
//  Created by shenyang-mac on 2018/12/24.
//  Copyright © 2018 shenyang-mac. All rights reserved.
//

#ifndef ZDefineExtension_h
#define ZDefineExtension_h

#define ZKK_LEFT(PRAMA) make.left.mas_equalTo(PRAMA)
#define ZKK_RIGHT(PRAMA) make.right.mas_equalTo(PRAMA)
#define ZKK_TOP(PRAMA) make.top.mas_equalTo(PRAMA)
#define ZKK_BOTTOM(PRAMA) make.bottom.mas_equalTo(PRAMA)
#define ZKK_WIDTH(PRAMA) make.width.mas_equalTo(PRAMA)
#define ZKK_HEIGHT(PRAMA) make.height.mas_equalTo(PRAMA)

#define ZKK_ALLZERO(PRAMA)\
ZKK_LEFT(PRAMA);\
ZKK_RIGHT(PRAMA);\
ZKK_TOP(PRAMA);\
ZKK_BOTTOM(PRAMA);

#define ZHLFontName                 [UIFont systemFontOfSize:1].fontName
#define ZHLFontNameBold             [UIFont boldSystemFontOfSize:1].fontName
#define ZHLFont(a)                  [UIFont systemFontOfSize:a]
#define ZHLBoldFont(a)              [UIFont boldSystemFontOfSize:a]

#define Zimg(a)                             [UIImage imageNamed:a]

#define ZNIBWithClass(a)                    [UINib nibWithNibName:NSStringFromClass([a class]) bundle:nil]

//颜色
#define ZRGB(r,g,b,a)               [UIColor colorWithRed:(double)r/255.0f green:(double)g/255.0f blue:(double)b/255.0f alpha:a]
//屏幕
#define ZIsiPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)


#endif /* ZDefineExtension_h */
