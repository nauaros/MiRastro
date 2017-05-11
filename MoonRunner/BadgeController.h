//
//  BadgeController.h
//  MoonRunner
//
//  Created by Naufal Aros El Morabet on 25/01/16.
//  Copyright © 2016 Naufal Aros. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Badge;
@class Run;

extern float const silverMultiplier;
extern float const goldMultiplier;

@interface BadgeController : NSObject

+ (BadgeController *)defaultController;

- (NSArray *)earnStatusesForRuns:(NSArray *)runs;

- (Badge *)bestBadgeForDistance:(float)distance;
- (Badge *)nextBadgeForDistance:(float)distance;

- (NSArray *)annotationsForRun:(Run *)run;

@end
