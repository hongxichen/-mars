//
//  ToplistIndexView.h
//  Mars
//
//  Created by 洪曦尘 on 16/1/18.
//  Copyright © 2016年 洪曦尘. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ToplistIndexModel;
typedef void(^TopicInfoImageShowBlock) (NSDictionary *);
@interface ToplistIndexView : UIView
@property (nonatomic,strong)ToplistIndexModel *toplistIndexModel;
@property (nonatomic,assign)NSInteger indexCount;     //第几个店铺
@property (nonatomic,copy)TopicInfoImageShowBlock topicInfoImageShowBlock;
@end
