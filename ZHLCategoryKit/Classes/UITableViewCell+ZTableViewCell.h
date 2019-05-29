//
//  UITableViewCell+ZTableViewCell.h
//  ZHLMinJiaoEnglish
//
//  Created by shenyang on 16/8/18.
//  Copyright © 2016年 BeiJingZhiHuiLiu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableViewCell (ZTableViewCell)

/**
 *  获得注册cell
 */
+ (instancetype)zhlLoadRegistCell:(UITableView *)tableView indexPath:(NSIndexPath *)indexPath;
/**
 *  注册cell
 */
+ (void)zhlRegistCell:(UITableView *)tableView;
@end
