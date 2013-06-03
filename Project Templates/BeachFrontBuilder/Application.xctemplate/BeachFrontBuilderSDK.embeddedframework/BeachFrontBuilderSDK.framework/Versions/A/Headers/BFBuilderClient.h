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

extern NSString* const BFBuilderApiBaseURL;
extern NSString* const BFBuilderApiCommonPath;
extern NSString* const BFBuilderApiStatusSucess;
extern NSInteger const BFBuilderAPIResultsPerPage;

extern NSString* const BFBuilderApiErrorDomain;
extern NSInteger const BFBuilderApiError;
extern NSInteger const BFBuilderApiErrorAccessKey;
extern NSInteger const BFBuilderApiErrorInvalidResponse;

NSError* BFBuilderAPIErrorWithDescription(NSString* description,NSInteger errorCode);

typedef enum {
    BFVideoFailureReasonFormatError,
    BFVideoFailureReasonURLNotFound,
}BFVideoFailureReason;

@interface BFBuilderClient : BF_AFHTTPClient

+ (BFBuilderClient *)sharedClient;

- (id)initWithAppKey:(NSString *)appKey appBuildID:(NSString*)appBuildID;

- (BF_AFHTTPRequestOperation*)getVideoswithSuccess:(void (^)(NSArray* videos))success
                     failure:(void (^)(NSError* error))failure;

- (BF_AFHTTPRequestOperation*)searchVideosWithQuery:(NSString *)query
                      success:(void (^)(NSArray* videos))success
                      failure:(void (^)(NSError* error))failure;

- (BF_AFHTTPRequestOperation*)getVideoDetailsWithVideoID:(NSString *)videoID
                           success:(void (^)(BFVideo* video))success
                           failure:(void (^)(NSError* error))failure;

- (BF_AFHTTPRequestOperation*)getChannelVideosWithChannelID:(NSString *)channelID
                                 page:(NSInteger)page
                              success:(void (^)(NSArray* videos))success
                              failure:(void (^)(NSError* error))failure;
    
- (BF_AFHTTPRequestOperation*)getChannelswithSuccess:(void (^)(NSArray* channels))success
                       failure:(void (^)(NSError* error))failure;

- (BF_AFHTTPRequestOperation*)getBuildInfowithSuccess:(void (^)(BFBuildInfo* buildInfo))success
                        failure:(void (^)(NSError* error))failure;

- (BF_AFHTTPRequestOperation*)reportFailedVideoWithVideoID:(NSString*)videoID
                              reason:(BFVideoFailureReason)reason
                             success:(void (^)())success
                             failure:(void (^)(NSError* error))failure;

- (NSMutableURLRequest*)getVideoURLGenerationRequestforVideo:(BFVideo*)video;
- (NSMutableURLRequest*)getVideoURLFetchRequestforVideo:(BFVideo*)video htmlData:(NSData*)htmlData;

@end
