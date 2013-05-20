//
//  BFChannelViewController.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 5/1/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BeachFrontBuilderSDK/BeachFrontBuilderSDK.h>


@interface BFChannelViewController : UICollectionViewController;

/*!
 Returns a freshly created BFChannelViewController for a particular
 channel
 */
-(id)initAsMeFeediaChannel;
/*!
 The designated initializer that returns a freshly created BFChannelViewController for a particular
 channel
 */
-(id)initWithChannel:(BFChannel *)channel;
@property (nonatomic,strong) BFChannel* channel;
@end
