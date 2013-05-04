//
//  MasterViewController.h
//  HW2 CS106L
//
//  Created by Shahab Mirjalili on 5/4/13.
//  Copyright (c) 2013 Shahab Mirjalili. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
