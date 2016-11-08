//
//  UIView+Extension.h
//  yiyoumeizu
//
//  Created by shi on 16/9/20.
//  Copyright © 2016年 yifuda. All rights reserved.
//

@import UIKit;

typedef void (^ActionBlock)();

@interface UIButton (ZZExtension)

- (void)handleControlEvent:(UIControlEvents)event withBlock:(ActionBlock)block;

@end
