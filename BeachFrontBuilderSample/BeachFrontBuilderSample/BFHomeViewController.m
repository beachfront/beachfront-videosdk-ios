//
//  BFHomeViewController.m
//  BeachFrontBuilderSample
//
//  Created by Sumeru Chatterjee on 5/19/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import "BFHomeViewController.h"

@interface BFHomeViewController ()<BFSearchDisplayDelegate>{
    BFSearchDisplayController* _searchController;
}
@property (nonatomic,strong) NSMutableArray* channels;
@end

@implementation BFHomeViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        
        self.title = NSLocalizedString(@"Channels", @"Channels");
        if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad) {
            self.clearsSelectionOnViewWillAppear = NO;
            self.contentSizeForViewInPopover = CGSizeMake(320.0, 600.0);
        }
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    UISearchBar* searchBar = [[UISearchBar alloc] init];
    [searchBar sizeToFit];
    _searchController = [[BFSearchDisplayController alloc] initWithSearchBar:searchBar
                                                          contentsController:self];
    _searchController.searchDisplayDelegate = self;
    [self.tableView setTableHeaderView:searchBar];
    [self.tableView setContentOffset:CGPointMake(0,searchBar.bounds.size.height)];
    
    [[BFBuilderClient sharedClient]
     getChannelswithSuccess:^(NSArray* channels){
         self.channels = [channels mutableCopy];
         [self.tableView reloadData];
     }
     failure:^(NSError* error){
         UIAlertView* alertView =
         [[UIAlertView alloc] initWithTitle:@"Error"
                                    message:error.description
                                   delegate:nil
                          cancelButtonTitle:@"OK"
                          otherButtonTitles:nil];
         [alertView show];
     }];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table View

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return _channels.count;
}

// Customize the appearance of table view cells.
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *CellIdentifier = @"Cell";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    if (cell == nil) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIdentifier];
        if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone) {
            cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
        }
    }
    BFChannel *channel = self.channels[indexPath.row];
    cell.textLabel.text = channel.name;
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    BFChannel* channel  = self.channels[indexPath.row];
    if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone) {
        BFChannelViewController* channelViewController =
        [[BFChannelViewController alloc] initWithChannel:channel];
        [self.navigationController pushViewController:channelViewController animated:YES];
    } else {
        [self.detailViewController setChannel:channel];
        [self.detailViewController.navigationController popToRootViewControllerAnimated:YES];
        [self.masterPopoverController dismissPopoverAnimated:YES];
    }
}

- (void)splitViewController:(UISplitViewController *)splitController willHideViewController:(UIViewController *)viewController withBarButtonItem:(UIBarButtonItem *)barButtonItem forPopoverController:(UIPopoverController *)popoverController
{
    barButtonItem.title = NSLocalizedString(@"Master", @"Master");
    [self.detailViewController.navigationItem setLeftBarButtonItem:barButtonItem animated:YES];
    self.masterPopoverController = popoverController;
}

- (void)splitViewController:(UISplitViewController *)splitController willShowViewController:(UIViewController *)viewController invalidatingBarButtonItem:(UIBarButtonItem *)barButtonItem
{
    // Called when the view is shown again in the split view, invalidating the button and popover controller.
    [self.detailViewController.navigationItem setLeftBarButtonItem:nil animated:YES];
    self.masterPopoverController = nil;
}


#pragma mark -
#pragma mark BFSearchDisplayDelegate

- (BOOL) searchDisplayController:(BFSearchDisplayController *)controller willPushViewController:(UIViewController*)viewController{
    
    if([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad){
        [self.detailViewController.navigationController pushViewController:viewController animated:YES];
        [self.masterPopoverController dismissPopoverAnimated:YES];
        return NO;
    }else{
        return YES;
    }
}


@end
