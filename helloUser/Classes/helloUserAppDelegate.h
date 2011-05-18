//
//  helloUserAppDelegate.h
//  helloUser
//
//  Created by yan lang on 11-5-18.
//  Copyright 2011 Shenzhen University. All rights reserved.
//

#import <UIKit/UIKit.h>

@class helloUserViewController;

@interface helloUserAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    helloUserViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet helloUserViewController *viewController;

@end

