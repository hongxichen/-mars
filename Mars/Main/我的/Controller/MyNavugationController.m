//
//  MyNavugationController.m
//  Mars
//
//  Created by 洪曦尘 on 16/1/18.
//  Copyright © 2016年 洪曦尘. All rights reserved.
//

#import "MyNavugationController.h"


@implementation MyNavugationController

- (UIStatusBarStyle)preferredStatusBarStyle
{
    NSArray *array = self.viewControllers;
    if (array.count == 2)
    {
        return UIStatusBarStyleDefault;
    }
    else
    {
        return UIStatusBarStyleLightContent;
    }
}

@end
