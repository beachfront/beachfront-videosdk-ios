//
//  BFYouTubeExtractionOperation.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 5/3/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <BeachFrontBuilderSDK/BFVideoURLExtractionOperation.h>

extern NSInteger const BFYouTubeExtractorErrorCodeInvalidYoutubeURL;
extern NSInteger const BFYouTubeExtractorErrorCodeInvalidResponse;
extern NSInteger const BFYouTubeExtractorErrorCodeQualityNotFound;

@interface BFYouTubeExtractionOperation : BFVideoURLExtractionOperation
+ (instancetype)startExtractionOperationWithYoutubeURL:(NSURL*)youtubeURL quality:(BFVideoQuality)quality
                                               success:(void (^)(NSURL* videoURL))success
                                               failure:(void (^)(NSError* error))failure;
                                                        
+ (instancetype)startExtractionOperationWithYoutubeID:(NSString*)youtubeID quality:(BFVideoQuality)quality
                                               success:(void (^)(NSURL* videoURL))success
                                               failure:(void (^)(NSError* error))failure;

-(id)initWithYoutubeID:(NSString*)youtubeID quality:(BFVideoQuality)quality;
@property (nonatomic, readonly) BFVideoQuality quality;
@property (nonatomic, readonly) NSURL *extractedURL;
@property (nonatomic, readonly) NSError *extractionError;
@end