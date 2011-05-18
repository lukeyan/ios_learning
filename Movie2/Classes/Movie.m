//
//  Movie.m
//  Movie2
//
//  Created by yan lang on 11-5-18.
//  Copyright 2011 Shenzhen University. All rights reserved.
//

#import "Movie.h"


@implementation Movie

@synthesize title;
@synthesize boxOfficeGross;
@synthesize summary;

-(id)initWithTitle:(NSString *)newTitle 
	boxOfficeGross:(NSNumber *)newBoxOfficeGross 
		   summary:(NSString *)newSummary{
	self = [super init];
	if(nil != self){
		self.title = newTitle;
		self.boxOfficeGross = newBoxOfficeGross;
		self.summary = newSummary;
	}
	return self;
}

-(void) dealloc{
	self.title =nil;
	self.boxOfficeGross = nil;
	self.summary = nil;
	[super dealloc];
}

@end
