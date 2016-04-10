//
//  ToplistModel.h
//  Mars
//
//  Created by 洪曦尘 on 15/12/31.
//  Copyright © 2015年 洪曦尘. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToplistModel : NSObject

@property (nonatomic,copy)NSString *storeID;    //商铺的对应id
@property (nonatomic,copy)NSString *cover;      //首页主页面的图片地址
@property (nonatomic,copy)NSString *storeDescription;
@end
