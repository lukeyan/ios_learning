//
//  helloUserViewController.h
//  helloUser
//
//  Created by yan lang on 11-5-18.
//  Copyright 2011 Shenzhen University. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface helloUserViewController : UIViewController <UITextFieldDelegate>{
	IBOutlet UILabel *helloLabel;
	IBOutlet UITextField *nameField;

}

-(IBAction) sayHello: (id) sender;

@end

