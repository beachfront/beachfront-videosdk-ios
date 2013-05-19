//
//  BFAnalyticsManager.h
//  BeachFrontBuilderSDK
//
//  Created by samyzee on 5/10/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BFAnalyticsManager : NSObject
+ (instancetype)sharedManager;

-(void)videoPlayWithVideoID:(NSString*)videoID
                    success:(void (^)(NSString* videoPlayID))success
                    failure:(void (^)(NSError* error))failure;

-(void)videoStopWithVideoID:(NSString*)videoID
                    success:(void (^)())success
                    failure:(void (^)(NSError* error))failure;

@property (nonatomic,readonly) NSString* analyticsID;
@end
