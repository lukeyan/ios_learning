//
//  Movie2AppDelegate.h
//  Movie2
//
//  Created by yan lang on 11-5-18.
//  Copyright 2011 Shenzhen University. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Movie2ViewController;

@interface Movie2AppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    Movie2ViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet Movie2ViewController *viewController;

@end

