//
//  BFHomeViewController.h
//  BeachFrontBuilderSample
//
//  Created by Sumeru Chatterjee on 5/19/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BeachFrontBuilderSDK/BeachFrontBuilderSDK.h>

@interface BFHomeViewController : UITableViewController <UISplitViewControllerDelegate>
@property (strong, nonatomic) BFChannelViewController *detailViewController;
@property (strong, nonatomic) UIPopoverController* masterPopoverController;
@end

