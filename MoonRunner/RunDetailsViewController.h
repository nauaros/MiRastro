//
//  DetailViewController.h
//  MoonRunner
//
//  Created by Naufal Aros El Morabet on 16/01/16.
//  Copyright © 2016 Naufal Aros. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MathController.h"
#import "Run.h"
#import "Location.h"

@class Run;

@interface RunDetailsViewController : UIViewController

@property (strong, nonatomic) Run *run;

@end

