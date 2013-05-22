//
//  BFSharingManager.h
//  BeachFrontBuilderSDK
//
//  Created by samyzee on 5/20/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <BeachFrontBuilderSDK/BFVideo.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
/*!
 A singleton class tha manages the sharing for a BeachFrontBuilder app.
 To get the shared analytics manager simply call [BFSharingManager sharedManager]
 */
@interface BFSharingManager : NSObject
+ (instancetype)sharedManager;

/*!
 Show the facebook share dialog for a video.
 */
- (BOOL)showFacebookShareDialogForVideo:(BFVideo*)video fromViewController:(UIViewController*)viewController;

/*!
 Show the twitter share dialog for a video.
 */
- (BOOL)showTwitterShareDialogForVideo:(BFVideo*)video fromViewController:(UIViewController*)viewController;
@end
