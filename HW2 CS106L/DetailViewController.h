//
//  DetailViewController.h
//  HW2 CS106L
//
//  Created by Shahab Mirjalili on 5/4/13.
//  Copyright (c) 2013 Shahab Mirjalili. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
