//
//  ToplistIndexModel.h
//  Mars
//
//  Created by 洪曦尘 on 16/1/17.
//  Copyright © 2016年 洪曦尘. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToplistIndexModel : NSObject
@property (nonatomic,copy)NSString *cover;
@property (nonatomic,copy)NSString *title;
@property (nonatomic,copy)NSMutableArray *storesAddress;
@property (nonatomic,copy)NSString *storeDescription;   //description
@property (nonatomic,copy)NSMutableArray *storesDesc;          //对应店铺的简介
@property (nonatomic,copy)NSMutableArray *storesName;
@property (nonatomic,copy)NSMutableArray *storesEnglishName;
@property (nonatomic,copy)NSMutableArray *storesIcon;
@property (nonatomic,copy)NSMutableArray *storesHeadpic;
@property (nonatomic,copy)NSMutableArray *storesScore;
@property (nonatomic,copy)NSMutableArray *storesTagName;
@property (nonatomic,copy)NSMutableArray *storesBizinfo;
@property (nonatomic,copy)NSMutableArray *storesPics;   //数组里面是icon数组

@end
