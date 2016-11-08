//
//  UIView+Extension.h
//  yiyoumeizu
//
//  Created by shi on 16/9/20.
//  Copyright © 2016年 yifuda. All rights reserved.
//

@import UIKit;

@interface UIView (ZZExtension)
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGFloat maxX;
@property (nonatomic, assign) CGFloat maxY;

- (UIView*)duplicate;

@end
