//
//  BizareaInfoOneTableView.h
//  Mars
//
//  Created by 洪曦尘 on 16/1/21.
//  Copyright © 2016年 洪曦尘. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BizareaModel;
@interface BizareaInfoOneTableView : UITableView
@property (nonatomic,strong)BizareaModel *model;
@property (nonatomic,assign)NSInteger indexSelect;
@end
