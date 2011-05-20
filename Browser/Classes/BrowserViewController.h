//
//  BrowserViewController.h
//  Browser
//
//  Created by yan lang on 11-5-19.
//  Copyright 2011 Shenzhen University. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BrowserViewController : UIViewController <UITextFieldDelegate> {
	IBOutlet UITextField *urlField;
	IBOutlet UIWebView *webView;

}

- (IBAction)handleGoTapped;

@end

