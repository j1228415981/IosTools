//
//  YMLabelWithTopLeft.m
//  yiyoumeizu
//
//  Created by shi on 16/9/20.
//  Copyright © 2016年 yifuda. All rights reserved.
//

#import "ZZLabelWithTopLeft.h"

@implementation ZZLabelWithTopLeft

- (id)initWithFrame:(CGRect)frame {
    return [super initWithFrame:frame];
}

- (CGRect)textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(NSInteger)numberOfLines {
    CGRect textRect = [super textRectForBounds:bounds limitedToNumberOfLines:numberOfLines];
    textRect.origin.y = bounds.origin.y;
    return textRect;
}
-(void)drawTextInRect:(CGRect)requestedRect {
    CGRect actualRect = [self textRectForBounds:requestedRect limitedToNumberOfLines:self.numberOfLines];
    [super drawTextInRect:actualRect];
}

@end
