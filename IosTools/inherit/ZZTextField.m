//
//  YMTextField.m
//  yiyoumeizu
//
//  Created by shi on 16/9/20.
//  Copyright © 2016年 yifuda. All rights reserved.
//

#import "ZZTextField.h"

@implementation ZZTextField

- (instancetype)init{
    self = [super init];
    if (self) {
        [self ini];
    }
    return self;
}

- (instancetype)initWithFrame:(CGRect)frame{
    self = [super initWithFrame:frame];
    if (self) {
        [self ini];
    }
    return self;
}

- (instancetype) initWithCoder:(NSCoder *)coder{
    self = [super initWithCoder:coder];
    if (self) {
        [self ini];
    }
    return self;
}

//mine
- (void)ini{
    self.clearButtonMode = UITextFieldViewModeWhileEditing;
    self.clipsToBounds =YES;
}

@end
