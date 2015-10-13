//
//  WebViewController.h
//  BlogReader
//
//  Created by Sachin Virdy on 10/12/15.
//  Copyright © 2015 Sachin Virdy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController

@property (strong, nonatomic) NSURL *blogPostURL;
@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end
