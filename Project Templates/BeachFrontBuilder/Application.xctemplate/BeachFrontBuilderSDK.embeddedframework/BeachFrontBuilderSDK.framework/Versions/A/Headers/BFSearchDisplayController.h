//
//  BFSearchDisplayController.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 5/10/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol BFSearchDisplayDelegate;

@interface BFSearchDisplayController : UISearchDisplayController<UISearchDisplayDelegate>
/*!
 A property that sets whether the searchdisplaycontroller pauses before searching.
 */
@property (nonatomic,assign)  BOOL                   pausesBeforeSearching;
/*!
 If the pauses before searching property is set then this sets the interval the search display controller
 waits before sending the search request.
 */
@property (nonatomic,assign)  NSTimeInterval         pausesTimerInterval;
/*!
 The seacrh display delegate
 */
@property (nonatomic,assign)  id<BFSearchDisplayDelegate> searchDisplayDelegate;
@end

@protocol BFSearchDisplayDelegate <NSObject>
@optional
/*!
 This is called when the controller will begin search.
 */
- (void) searchDisplayControllerWillBeginSearch:(BFSearchDisplayController *)controller;
/*!
 This is called when the controller did begin search.
 */
- (void) searchDisplayControllerDidBeginSearch:(BFSearchDisplayController *)controller;
/*!
 This is called when the controller will end search.
 */
- (void) searchDisplayControllerWillEndSearch:(BFSearchDisplayController *)controller;
/*!
 This is called when the controller Did end search.
 */
- (void) searchDisplayControllerDidEndSearch:(BFSearchDisplayController *)controller;
/*!
 This is called when the controller is about to push a view controller on the navigation controller.
 */
- (BOOL) searchDisplayController:(BFSearchDisplayController *)controller willPushViewController:(UIViewController*)viewController;
/*!
 This is called when the controller has pushed a view controller on the navigation controller.
 */
- (void) searchDisplayController:(BFSearchDisplayController *)controller didPushViewController:(UIViewController*)viewController;
@end