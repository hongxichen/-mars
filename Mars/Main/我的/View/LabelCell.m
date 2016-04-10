//
//  LabelCell.m
//  Mars
//
//  Created by 洪曦尘 on 16/1/18.
//  Copyright © 2016年 洪曦尘. All rights reserved.
//

#import "LabelCell.h"

@interface LabelCell()

@property (weak, nonatomic) IBOutlet UILabel *seLabel;

@end

@implementation LabelCell

- (instancetype)initWithLabelName:(NSString *)string
{
    self.seLabel.text = string;
    self.backgroundColor = [UIColor clearColor];
    return self;
}

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
