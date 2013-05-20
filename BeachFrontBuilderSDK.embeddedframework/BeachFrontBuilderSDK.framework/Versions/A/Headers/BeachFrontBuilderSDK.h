//
//  BeachFrontBuilderSDK.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 4/22/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//


#ifndef _BeachFront_SDK_
#define _BeachFront_SDK_

#import <Foundation/Foundation.h>
#import <Availability.h>

//External
#import<MobileCoreServices/MobileCoreServices.h>
#import<SystemConfiguration/SystemConfiguration.h>

//Common
#import <BeachFrontBuilderSDK/BFConstants.h>
#import <BeachFrontBuilderSDK/BFCommon.h>

//Data Objects
#import <BeachFrontBuilderSDK/BFVideo.h>
#import <BeachFrontBuilderSDK/BFChannel.h>
#import <BeachFrontBuilderSDK/BFBuildInfo.h>

//API Clients
#import <BeachFrontBuilderSDK/BFAnalyticsClient.h>
#import <BeachFrontBuilderSDK/BFBuilderClient.h>

//ViewControllers
#import <BeachFrontBuilderSDK/BFViewController.h>
#import <BeachFrontBuilderSDK/BFChannelViewController.h>

//Search Display Controller
#import <BeachFrontBuilderSDK/BFSearchDisplayController.h>

//Views
#import <BeachFrontBuilderSDK/BFVideoThumbnailView.h>
#import <BeachFrontBuilderSDK/BFVideoCollectionViewCell.h>
#import <BeachFrontBuilderSDK/BFActivityIndicatorView.h>

//Extractors
#import <BeachFrontBuilderSDK/BFVideoURLExtractionOperation.h>
#import <BeachFrontBuilderSDK/BFYoutubeExtractionOperation.h>
#import <BeachFrontBuilderSDK/BFVimeoExtractionOperation.h>
#import <BeachFrontBuilderSDK/BFDailyMotionExtractionOperation.h>

//AFNetworking
#import <BeachFrontBuilderSDK/BF_AFURLConnectionOperation.h>
#import <BeachFrontBuilderSDK/BF_AFHTTPRequestOperation.h>
#import <BeachFrontBuilderSDK/BF_AFJSONRequestOperation.h>
#import <BeachFrontBuilderSDK/BF_AFXMLRequestOperation.h>
#import <BeachFrontBuilderSDK/BF_AFPropertyListRequestOperation.h>
#import <BeachFrontBuilderSDK/BF_AFHTTPClient.h>
#import <BeachFrontBuilderSDK/BF_AFImageRequestOperation.h>

#if defined(__IPHONE_OS_VERSION_MIN_REQUIRED)
#import <BeachFrontBuilderSDK/BF_AFNetworkActivityIndicatorManager.h>
#import <BeachFrontBuilderSDK/UIImageView+BF_AFNetworking.h>
#endif

#endif

extern NSString* BeachFrontSDKAppKey;
extern NSString* BeachFrontSDKAppBuildID;

@interface BeachFrontBuilderSDK:NSObject
/*!
 Initializes the SDK with the app-key and app-buildid that you have recieved from BeachFrontBuilder.
 @param appKey The application key for your BeachFrontBuilder Application.
 @param applicationId The application buildid for your BeachFrontBuilder Application.
 */
+ (void)startWithAppKey:(NSString *)appKey appBuildID:(NSString*)appBuildID;
@end