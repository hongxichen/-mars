//
//  MyHeadView.h
//  Mars
//
//  Created by 洪曦尘 on 16/1/18.
//  Copyright © 2016年 洪曦尘. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyHeadView : UIView


@property (weak, nonatomic) IBOutlet UIImageView *bgImageView;
- (instancetype)initWithAvatar:(NSString *)avatarString name:(NSString *)name;

@end
