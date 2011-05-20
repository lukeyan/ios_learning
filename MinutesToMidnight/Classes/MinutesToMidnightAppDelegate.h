//
//  MinutesToMidnightAppDelegate.h
//  MinutesToMidnight
//
//  Created by yan lang on 11-5-19.
//  Copyright 2011 Shenzhen University. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MinutesToMidnightViewController;

@interface MinutesToMidnightAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    MinutesToMidnightViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet MinutesToMidnightViewController *viewController;

@end

