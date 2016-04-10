//
//  BizareaView.h
//  Mars
//
//  Created by 洪曦尘 on 16/1/2.
//  Copyright © 2016年 洪曦尘. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BizareaModel;

typedef void(^BizereaStoreShowBlock) (NSDictionary *dic);

@interface BizareaView : UIView

@property (nonatomic,strong)BizareaModel *bizareaModel;
@property (nonatomic,copy)BizereaStoreShowBlock bizereaStoreShowBlock;
@end
