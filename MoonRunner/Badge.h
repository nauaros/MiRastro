//
//  Badge.h
//  MoonRunner
//
//  Created by Naufal Aros El Morabet on 25/01/16.
//  Copyright © 2016 Naufal Aros. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Badge : NSObject

@property (strong, nonatomic) NSString  *name;
@property (strong, nonatomic) NSString *imageName;
@property (strong, nonatomic) NSString *information;
@property float distance;

@end