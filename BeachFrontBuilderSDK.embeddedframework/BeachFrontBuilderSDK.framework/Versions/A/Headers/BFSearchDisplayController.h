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
@property (nonatomic,assign)  BOOL                   pausesBeforeSearching;
@property (nonatomic,assign)  NSTimeInterval         pausesTimerInterval;
@property (nonatomic,assign)  id<BFSearchDisplayDelegate> searchDisplayDelegate;
@end


@protocol BFSearchDisplayDelegate <NSObject>
@optional
- (void) searchDisplayControllerWillBeginSearch:(BFSearchDisplayController *)controller;
- (void) searchDisplayControllerDidBeginSearch:(BFSearchDisplayController *)controller;
- (void) searchDisplayControllerWillEndSearch:(BFSearchDisplayController *)controller;
- (void) searchDisplayControllerDidEndSearch:(BFSearchDisplayController *)controller;
@end