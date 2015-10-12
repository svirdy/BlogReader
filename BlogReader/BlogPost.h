//
//  BlogPost.h
//  BlogReader
//
//  Created by Sachin Virdy on 10/10/15.
//  Copyright © 2015 Sachin Virdy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *author;

// Designated initializer
- (id) initWithTitle:(NSString *)title;
+ (id) blogPostWithTitle:(NSString *)title;
@end
