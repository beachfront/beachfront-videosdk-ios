//
//  BFAppDelegate.m
//  BeachFrontBuilderSample
//
//  Created by Sumeru Chatterjee on 5/19/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import "BFAppDelegate.h"
#import "BFHomeViewController.h"

//BeachFrontBuilderSDK
#import <BeachFrontBuilderSDK/BeachFrontBuilderSDK.h>

static NSString * const kBeachFrontBuilderAppKey = @"5be86205-ebf8-4cd5-82cd-cf2a5a603be0";
static NSString * const kBeachFrontBuilderAppBuildID = @"1";

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

@implementation BFAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    //Initialize BeachFrontBuilderSDK
    [BeachFrontBuilderSDK startWithAppKey:kBeachFrontBuilderAppKey appBuildID:kBeachFrontBuilderAppBuildID];
    
    //Style the UI
    [self styleUI];
    
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    // Override point for customization after application launch.
    if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone) {
        
        BFHomeViewController *masterViewController = [[BFHomeViewController alloc] initWithNibName:@"BFHomeViewController_iPhone" bundle:nil];
        self.navigationController = [[UINavigationController alloc] initWithRootViewController:masterViewController];
        self.window.rootViewController = self.navigationController;
        
    } else {
        
        BFHomeViewController *masterViewController = [[BFHomeViewController alloc] initWithNibName:@"BFHomeViewController_iPad" bundle:nil];
        UINavigationController *masterNavigationController = [[UINavigationController alloc] initWithRootViewController:masterViewController];
        
        BFChannelViewController *detailViewController = [[BFChannelViewController alloc] initAsMeFeediaChannel];
        UINavigationController *detailNavigationController = [[UINavigationController alloc] initWithRootViewController:detailViewController];
    	masterViewController.detailViewController = detailViewController;
    	
        self.splitViewController = [[UISplitViewController alloc] init];
        self.splitViewController.delegate = masterViewController;
        self.splitViewController.viewControllers = @[masterNavigationController, detailNavigationController];
        
        self.window.rootViewController = self.splitViewController;
    }
    [self.window makeKeyAndVisible];
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

#pragma mark
#pragma mark Private

-(void)styleUI{
    [[UINavigationBar appearance] setTintColor:UIColorFromRGB(0x6944a1)];
    [[UISearchBar appearance] setTintColor:UIColorFromRGB(0x6944a1)];
}

@end
