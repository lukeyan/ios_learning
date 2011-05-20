//
//  Movie2ViewController.h
//  Movie2
//
//  Created by yan lang on 11-5-18.
//  Copyright 2011 Shenzhen University. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Movie;
@class MovieEditorViewController;

@interface Movie2ViewController : UIViewController {
	Movie *movie;
	UILabel *titleLabel;
	UILabel *boxOfficeGrossLabel;
	UILabel *summaryLabel;
	MovieEditorViewController *editingViewController;
}

@property(nonatomic,retain) Movie *movie;
@property(nonatomic,retain) IBOutlet UILabel *titleLabel;
@property(nonatomic,retain) IBOutlet UILabel *boxOfficeGrossLabel;
@property(nonatomic,retain) IBOutlet UILabel *summaryLabel;
@property(nonatomic,retain) IBOutlet MovieEditorViewController *editingViewController;

-(IBAction)edit;

@end

