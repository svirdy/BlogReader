//
//  BlogPost.m
//  BlogReader
//
//  Created by Sachin Virdy on 10/10/15.
//  Copyright © 2015 Sachin Virdy. All rights reserved.
//

#import "BlogPost.h"

@implementation BlogPost

- (id) initWithTitle:(NSString *)title {
    self = [super init];
    
    if (self) {
        self.title = title;
    }
    
    return self;
}

+ (id) blogPostWithTitle:(NSString *)title {
    return [[self alloc] initWithTitle:title];
}

@end
