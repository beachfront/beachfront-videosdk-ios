//
//  BFViewController.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 5/8/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BFViewController : UIViewController
/*!
 Shows or removes a loading spinner view
 */
-(void)showLoading:(BOOL)show;
/*!
 Shows or removes an error message
 */
-(void)showError:(NSError*)error;
/*!
 Shows or removes an empty message
 */
- (void)showEmpty:(BOOL)show;
/*!
 Gets or sets the loading view
 */
@property (nonatomic,strong) UIView* loadingView;
/*!
 Gets or sets the empty view
 */
@property (nonatomic,strong) UIView* emptyView;
/*!
 Gets or sets the error view
 */
@property (nonatomic,strong) UIView* errorView;
/*!
 Override to set the default title for loading.
 */
-(NSString*)titleForLoading;
/*!
 Override to set the default title for a given error.
 */
-(NSString*)titleForError:(NSError*)error;
/*!
 Override to set the default title for empty.
 */
-(NSString*)titleForEmpty;
@end
