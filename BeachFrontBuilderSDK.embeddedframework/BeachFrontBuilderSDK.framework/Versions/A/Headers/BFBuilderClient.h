//
//  BFBuilderClient.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 4/24/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <BeachFrontBuilderSDK/BF_AFHTTPClient.h>
#import <BeachFrontBuilderSDK/BFVideo.h>
#import <BeachFrontBuilderSDK/BFBuildInfo.h>

typedef enum {
    BFVideoFailureReasonFormatError,
    BFVideoFailureReasonURLNotFound,
}BFVideoFailureReason;

@interface BFBuilderClient : BF_AFHTTPClient

+ (BFBuilderClient *)sharedClient;

- (id)initWithAppKey:(NSString *)appKey appBuildID:(NSString*)appBuildID;

- (void)getVideoswithSuccess:(void (^)(NSArray* videos))success
                     failure:(void (^)(NSError* error))failure;

- (void)searchVideosWithQuery:(NSString *)query
                      success:(void (^)(NSArray* videos))success
                      failure:(void (^)(NSError* error))failure;

- (void)getVideoDetailsWithVideoID:(NSString *)videoID
                           success:(void (^)(BFVideo* video))success
                           failure:(void (^)(NSError* error))failure;

- (void)getChannelVideosWithChannelID:(NSString *)channelID
                                 page:(NSInteger)page
                              success:(void (^)(NSArray* videos))success
                              failure:(void (^)(NSError* error))failure;
    
- (void)getChannelswithSuccess:(void (^)(NSArray* channels))success
                       failure:(void (^)(NSError* error))failure;

- (void)getBuildInfowithSuccess:(void (^)(BFBuildInfo* buildInfo))success
                        failure:(void (^)(NSError* error))failure;

- (void)reportFailedVideoWithVideoID:(NSString*)videoID
                              reason:(BFVideoFailureReason)reason
                             success:(void (^)())success
                             failure:(void (^)(NSError* error))failure;

- (void)getVideoURLforVideo:(BFVideo*)video
                    success:(void (^)(NSURL* videoURL))success
                    failure:(void (^)(NSError* error))failure;
@end
