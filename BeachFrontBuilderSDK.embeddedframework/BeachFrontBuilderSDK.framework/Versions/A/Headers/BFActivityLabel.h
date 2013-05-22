//
//  BFActivityLabel.h
//  BeachFrontBuilderSDK
//
//  Created by samyzee on 5/22/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BFActivityLabel : UIView
- (id)initWithText:(NSString*)text;
@property (nonatomic, copy)     NSString* text;
@property (nonatomic, assign)   BOOL      isAnimating;
@end
