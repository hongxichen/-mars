//
//  Cell3.m
//  Mars
//
//  Created by 洪曦尘 on 16/1/22.
//  Copyright © 2016年 洪曦尘. All rights reserved.
//

#import "Cell3.h"
#import "Cell3Model.h"
@implementation Cell3

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}
-(void)setModel:(Cell3Model *)model {
    if (model != _model) {
        _model = model;
        
        //        Cell1Model *model1 = [[Cell1Model alloc] init];
        
        
        [_img2 sd_setImageWithURL:[NSURL URLWithString:model.img1]];
        [_img1 sd_setImageWithURL:[NSURL URLWithString:model.img2]];
        [_img3 sd_setImageWithURL:[NSURL URLWithString:model.img3]];
        [_img4 sd_setImageWithURL:[NSURL URLWithString:model.img4]];
        [_img5 sd_setImageWithURL:[NSURL URLWithString:model.img5]];
        _label1.text = model.title1;
        _label.text = model.title;
        //        NSLog(@"%@",model.title);
    }
}
@end
