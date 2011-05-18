//
//  MovieEditorViewController.h
//  Movie2
//
//  Created by yan lang on 11-5-18.
//  Copyright 2011 Shenzhen University. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Movie;


@interface MovieEditorViewController : UIViewController <UITextFieldDelegate> {
	UITextField *titleField;
	UITextField * boxOfficeGrossField;
	UITextField *summaryField;
	Movie *movie;
}

@property(nonatomic,retain) IBOutlet UITextField *titleField;
@property(nonatomic,retain) IBOutlet UITextField *boxOfficeGrossField;
@property(nonatomic,retain) IBOutlet UITextField *summaryField;
@property(nonatomic,retain) Movie *movie;

- (IBAction)done;

@end
