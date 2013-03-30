//
//  MainViewController.h
//  Cocktail Machine
//
//  Created by Joe Zhou on 13-3-30.
//  Copyright (c) 2013年 Joe Zhou. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
