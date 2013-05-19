//
//  BFVideoCollectionViewCell.h
//  BeachFrontBuilderSDK
//
//  Created by samyzee on 5/3/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BeachFrontBuilderSDK/BeachFrontBuilderSDK.h>

@class BFVideoThumbnailView;

@interface BFVideoCollectionViewCell : UICollectionViewCell
@property (nonatomic,readonly) BFVideoThumbnailView* thumbnailView;
@property (nonatomic,strong)   BFVideo* video;
@end
