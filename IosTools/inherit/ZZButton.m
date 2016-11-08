//
//  YMButton.m
//  yiyoumeizu
//
//  Created by shi on 16/9/20.
//  Copyright © 2016年 yifuda. All rights reserved.
//

#import "ZZButton.h"

static const CGFloat kAcceptEventInterval = 0.0;//默认点击间隔

@interface ZZButton()

@property(nonatomic,assign)CGFloat acceptEventTime;//最后点击时间

@end

@implementation ZZButton

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

- (instancetype)initWithCoder:(NSCoder *)aDecoder{
    self = [super initWithCoder:aDecoder];
    if (self) {
        [self ini];
    }
    return self;
}

//初始化
- (void)ini{
    self.backgroundColor = [UIColor clearColor];
    _acceptEventInterval = kAcceptEventInterval;
}

/*******   避免按钮连击 begin   ******/
- (void)sendAction:(SEL)action to:(id)target forEvent:(UIEvent *)event {
    NSTimeInterval timeInterval = [NSDate date].timeIntervalSince1970;
    if (_acceptEventInterval >0 ) {//用户主动设置了点击间隔
        if ((timeInterval - _acceptEventTime < _acceptEventInterval) && (timeInterval - _acceptEventTime >0)) {
            return;
        }
    }
    _acceptEventTime = timeInterval;
    [super sendAction:action to:target forEvent:event];
}

/*******   避免按钮连击 end   ******/

@end
