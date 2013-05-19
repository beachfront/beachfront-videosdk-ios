//
//  BFViewController.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 5/8/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BFViewController : UIViewController
-(void)showLoading:(BOOL)loading;
-(void)showError:(NSError*)error;
@end
