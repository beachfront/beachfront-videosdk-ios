//
//  BFYouTubeExtractionOperation.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 5/3/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <BeachFrontBuilderSDK/BFVideoURLExtractionOperation.h>

extern NSInteger const BFYouTubeExtractorErrorCodeInvalidMeFeediaHTML;
extern NSInteger const BFYouTubeExtractorErrorCodeInvalidYoutubeURL;
extern NSInteger const BFYouTubeExtractorErrorCodeInvalidResponse;
extern NSInteger const BFYouTubeExtractorErrorCodeQualityNotFound;

@interface BFYouTubeExtractionOperation : BFVideoURLExtractionOperation
+ (NSString *)youtubeIDFromYoutubeURL:(NSURL *)youtubeURL;

+ (BF_AFHTTPRequestOperation*)startExtractionOperationWithYoutubeURL:(NSURL*)youtubeURL quality:(BFVideoQuality)quality
                                               success:(void (^)(NSURL* videoURL))success
                                               failure:(void (^)(NSError* error))failure;
                                                        
+ (BF_AFHTTPRequestOperation*)startExtractionOperationWithYoutubeID:(NSString*)youtubeID quality:(BFVideoQuality)quality
                                               success:(void (^)(NSURL* videoURL))success
                                               failure:(void (^)(NSError* error))failure;

+ (BF_AFHTTPRequestOperation*)startExtractionOperationWithMefeediaURL:(NSURL*)mefeediaURL quality:(BFVideoQuality)quality
                                                              success:(void (^)(NSURL* videoURL))success
                                                              failure:(void (^)(NSError* error))failure;

-(id)initWithYoutubeID:(NSString*)youtubeID quality:(BFVideoQuality)quality;
@property (nonatomic, readonly) BFVideoQuality quality;
@property (nonatomic, readonly) NSURL *extractedURL;
@end