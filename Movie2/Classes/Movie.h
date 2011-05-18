//
//  Movie.h
//  Movie2
//
//  Created by yan lang on 11-5-18.
//  Copyright 2011 Shenzhen University. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Movie : NSObject {
	NSString *title;
	NSNumber *boxOfficeGross;
	NSString *summary;

}

-(id)initWithTitle:(NSString *)newTitle
	boxOfficeGross:(NSNumber *)newBoxOfficeGross
		   summary:(NSString *)newSummary;

@property(nonatomic,copy) NSString *title;
@property(nonatomic,copy) NSNumber *boxOfficeGross;
@property(nonatomic,copy) NSString *summary;


@end
