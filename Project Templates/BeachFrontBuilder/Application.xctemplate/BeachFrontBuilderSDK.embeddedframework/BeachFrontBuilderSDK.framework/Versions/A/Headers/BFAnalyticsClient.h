//
//  BFAnalyticsClient.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 4/25/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <BeachFrontBuilderSDK/BF_AFHTTPClient.h>

extern NSString* const BFAnalyticsApiBaseURL;
extern NSString* const BFAnalyticsApiCommonPath;
extern NSString* const BFAnalyticsApiErrorDomain;
extern NSInteger const BFAnalyticsApiError;
extern NSInteger const BFAnalyticsApiErrorInvalidResponse;
extern NSInteger const BFAnalyticsApiErrorInvalidAnalyticsID;
extern NSInteger const BFAnalyticsApiErrorInvalidSessionID;
extern NSInteger const BFAnalyticsApiErrorInvalidVideoID;
extern NSInteger const BFAnalyticsApiErrorInvalidVideoPlayID;

@interface BFAnalyticsClient : BF_AFHTTPClient

+ (BFAnalyticsClient *)sharedClient;

- (id)initWithAppKey:(NSString *)appKey appBuildID:(NSString*)appBuildID;

- (BF_AFHTTPRequestOperation*)registerWithSuccess:(void (^)(NSString* analyticsID))success
                    failure:(void (^)(NSError* error))failure;

- (BF_AFHTTPRequestOperation*)startSessionWithAnalyticsID:(NSString*)analyticsID
                            success:(void (^)(NSString* sessionID))success
                            failure:(void (^)(NSError* error))failure;

- (BF_AFHTTPRequestOperation*)endSessionWithSessionID:(NSString*)sessionID
                    analyticsID:(NSString*)analyticsID
                        success:(void (^)())success
                        failure:(void (^)(NSError* error))failure;

- (BF_AFHTTPRequestOperation*)registerUpdateWithAnalyticsID:(NSString*)analyticsIDs
                              success:(void (^)())success
                              failure:(void (^)(NSError* error))failure;

- (BF_AFHTTPRequestOperation*)videoPlayWithVideoID:(NSString*)videoID
                   sessionID:(NSString*)sessionID
                    analyticsID:(NSString*)analyticsID
                    success:(void (^)(NSString* videoPlayID))success
                    failure:(void (^)(NSError* error))failure;

- (BF_AFHTTPRequestOperation*)videoStopWithVideoPlayID:(NSString*)videoPlayID
                         videoID:(NSString*)videoID
                     analyticsID:(NSString*)analyticsID
                         success:(void (^)())success
                         failure:(void (^)(NSError* error))failure;
@end
