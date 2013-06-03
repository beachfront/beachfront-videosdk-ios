//
//  BFAnalyticsManager.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 5/10/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 A singleton class tha manages the analytics for a BeachFrontBuilder app.
 To get the shared analytics manager simply call [BFAnalyticsManager sharedManager]
 */
@interface BFAnalyticsManager : NSObject
+ (instancetype)sharedManager;
/*!
 Tracks the start of a video.
 */
-(void)videoPlayWithVideoID:(NSString*)videoID
                    success:(void (^)(NSString* videoPlayID))success
                    failure:(void (^)(NSError* error))failure;
/*!
 Tracks the end of a video.
 */
-(void)videoStopWithVideoID:(NSString*)videoID
                    success:(void (^)())success
                    failure:(void (^)(NSError* error))failure;

/*!
 The unique analyticsID received from the server that BFAnalyticsManager uses
 as an identifier.
 */
@property (nonatomic,readonly) NSString* analyticsID;
@end
