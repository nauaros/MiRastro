//
//  HomeViewController.h
//  MoonRunner
//
//  Created by Naufal Aros El Morabet on 18/01/16.
//  Copyright © 2016 Naufal Aros. All rights reserved.
//

#import <CoreData/CoreData.h>
#import <UIKit/UIKit.h>

@interface HomeViewController : UIViewController

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;

@end
