//
//  BadgeEarnStatus.h
//  MoonRunner
//
//  Created by Naufal Aros El Morabet on 25/01/16.
//  Copyright © 2016 Naufal Aros. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Badge;
@class Run;

@interface BadgeEarnStatus : NSObject

@property (strong, nonatomic) Badge *badge;
@property (strong, nonatomic) Run *earnRun;
@property (strong, nonatomic) Run *silverRun;
@property (strong, nonatomic) Run *goldRun;
@property (strong, nonatomic) Run *bestRun;

@end
