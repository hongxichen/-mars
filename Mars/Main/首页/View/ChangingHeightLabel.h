//
//  ChangingHeightLabel.h
//  Mars
//
//  Created by 洪曦尘 on 16/1/22.
//  Copyright © 2016年 洪曦尘. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChangingHeightLabel : UILabel
- (instancetype)initWithFrame:(CGRect)frame withString:(NSString *)text withFlag:(BOOL)isClick withSuperView:(UIView *)superView;
@end
