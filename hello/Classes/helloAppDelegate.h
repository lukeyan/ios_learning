//
//  helloAppDelegate.h
//  hello
//
//  Created by yan lang on 11-5-17.
//  Copyright 2011 Shenzhen University. All rights reserved.
//

#import <UIKit/UIKit.h>

@class helloViewController;

@interface helloAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    helloViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet helloViewController *viewController;

@end

