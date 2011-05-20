//
//  BrowserAppDelegate.h
//  Browser
//
//  Created by yan lang on 11-5-19.
//  Copyright 2011 Shenzhen University. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BrowserViewController;

@interface BrowserAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    BrowserViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet BrowserViewController *viewController;

@end

