//
//  Movie2ViewController.m
//  Movie2
//
//  Created by yan lang on 11-5-18.
//  Copyright 2011 Shenzhen University. All rights reserved.
//

#import "Movie2ViewController.h"
#import "Movie.h"
#import "MovieEditorViewController.h"

@implementation Movie2ViewController

@synthesize titleLabel;
@synthesize boxOfficeGrossLabel;
@synthesize summaryLabel;
@synthesize movie;
@synthesize editingViewController;


/*
// The designated initializer. Override to perform setup that is required before the view is loaded.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}
*/

/*
// Implement loadView to create a view hierarchy programmatically, without using a nib.
- (void)loadView {
}
*/



// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
	Movie *newMovie =[[[Movie alloc]
					  initWithTitle:@"Iron man"
					  boxOfficeGross:[NSNumber numberWithFloat:650000000.00]
					   summary:@"Smart guy makes cool armor"] autorelease];
	self.movie = newMovie;
}



/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

- (void)didReceiveMemoryWarning {
	// Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
	
	// Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
	// Release any retained subviews of the main view.
	// e.g. self.myOutlet = nil;
}

- (void)viewWillAppear:(BOOL)animated{
	[super viewWillAppear:animated];
	self.titleLabel.text = self.movie.title;
	NSNumberFormatter *formatter = [[NSNumberFormatter alloc] init];
	[formatter setNumberStyle:NSNumberFormatterCurrencyStyle];
	self.boxOfficeGrossLabel.text =
	[formatter stringFromNumber:self.movie.boxOfficeGross];
	[formatter release];
	self.summaryLabel.text = self.movie.summary;
}
   
-(IBAction)edit{
	self.editingViewController.movie = self.movie;
	[self presentModalViewController:self.editingViewController animated:YES];
}

- (void)dealloc {
    [super dealloc];
}

@end
