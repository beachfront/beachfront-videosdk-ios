//
//  BFChannelViewController.h
//  BeachFrontBuilderSDK
//
//  Created by samyzee on 5/1/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BeachFrontBuilderSDK/BeachFrontBuilderSDK.h>


@interface BFChannelViewController : UICollectionViewController;
-(id)initAsMeFeediaChannel;
-(id)initWithChannel:(BFChannel *)channel;
@property (nonatomic,strong) BFChannel* channel;
@end
