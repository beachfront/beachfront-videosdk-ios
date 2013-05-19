//
//  BFVideoThumbnailView.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 5/10/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BeachFrontBuilderSDK/BeachFrontBuilderSDK.h>

@interface BFVideoThumbnailView : UIView
-(id)initWithFrame:(CGRect)frame;
@property (nonatomic,readonly) UIImageView* imageView;
@property (nonatomic,readonly) UILabel* titleLabel;
@property (nonatomic,readonly) UILabel* durationLabel;
@property (nonatomic,readonly) UILabel* postedLabel;
@property (nonatomic,strong)   BFVideo* video;
@end
