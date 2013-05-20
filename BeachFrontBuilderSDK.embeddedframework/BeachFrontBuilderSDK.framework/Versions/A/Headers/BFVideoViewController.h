//
//  BFVideoViewController.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 5/3/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BeachFrontBuilderSDK/BeachFrontBuilderSDK.h>

@interface BFVideoViewController : UIViewController
/*!
 The designated initializer that returns a freshly created BFVideoViewController object.
 */
-(id)initWithVideo:(BFVideo*)video;
@end
