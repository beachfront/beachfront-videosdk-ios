//
//  BFActivityIndicatorView.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 5/6/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BFActivityIndicatorView : UIView

- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)isAnimating;

@property(nonatomic,assign) BOOL hidesWhenStopped;
@end
