//
//  ToplistView.h
//  Mars
//
//  Created by 洪曦尘 on 16/1/17.
//  Copyright © 2016年 洪曦尘. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^ToplistChooseIndexBlock)(NSString *);
@interface ToplistView : UIView
@property (nonatomic,copy)NSArray *toplistModelArray;
@property (nonatomic,copy)ToplistChooseIndexBlock block;
@end
