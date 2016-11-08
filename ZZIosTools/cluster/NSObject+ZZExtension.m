//
//  NSObject+Extension.m
//  Together
//
//  Created by jamehery on 14-12-26.
//  Copyright (c) 2013年 Together. All rights reserved.
//

#import "NSObject+ZZExtension.h"

#import <objc/runtime.h>

static const void *strKey = &strKey;
static const void *strKey2 = &strKey2;
static const void *strKey3 = &strKey3;

static const void *objKey = &objKey;
static const void *objKey2 = &objKey2;

@implementation NSObject (ZZExtension)

- (NSString *)str{
    return objc_getAssociatedObject(self, strKey);
}

- (void)setStr:(NSString*)str{
    objc_setAssociatedObject(self, strKey, str, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}


- (NSString *)str2{
    return objc_getAssociatedObject(self, strKey2);
}
- (void)setStr2:(NSString*)str{
    objc_setAssociatedObject(self, strKey2, str, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (NSString *)str3{
    return objc_getAssociatedObject(self, strKey3);
}
- (void)setStr3:(NSString*)str{
    objc_setAssociatedObject(self, strKey3, str, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}


- (NSObject *)obj{
    return objc_getAssociatedObject(self, objKey);
}

- (void)setObj:(NSString *)obj{
    objc_setAssociatedObject(self, objKey, obj, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (NSObject *)obj2{
    return objc_getAssociatedObject(self, objKey2);
}

- (void)setObj2:(id)obj{
    objc_setAssociatedObject(self, objKey2, obj, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

@end
