//
//  testAppDelegate.h
//  test
//
//  Created by yan lang on 11-5-20.
//  Copyright 2011 Shenzhen University. All rights reserved.
//

#import <UIKit/UIKit.h>

@class testViewController;

@interface testAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    testViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet testViewController *viewController;

@end

