//
//  XFCell.h
//  Mars
//
//  Created by 洪曦尘 on 16/1/23.
//  Copyright © 2016年 洪曦尘. All rights reserved.
//

#import <UIKit/UIKit.h>
@class NewsModel;
@interface XFCell : UITableViewCell
{
    __weak IBOutlet UIImageView *_img1;
    
    __weak IBOutlet UIImageView *_img2;
    __weak IBOutlet UILabel *_title;
}

@property (nonatomic, strong)NewsModel *model;
@end
