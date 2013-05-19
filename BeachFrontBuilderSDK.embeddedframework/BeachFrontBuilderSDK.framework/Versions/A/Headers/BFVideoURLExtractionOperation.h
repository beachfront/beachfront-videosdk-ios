//
//  BFVideoURLExtractionOperation.h
//  BeachFrontBuilderSDK
//
//  Created by samyzee on 5/18/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <BeachFrontBuilderSDK/BF_AFHTTPRequestOperation.h>
#import <BeachFrontBuilderSDK/BFVideo.h>

extern NSString* const BFVideoURLExtractionErrorDomain;
extern NSInteger const BFVideoURLExtractionErrorInvalidSourceType;
dispatch_queue_t extraction_operation_processing_queue();

typedef enum {
    BFVideoQualitySmall    = 0,
    BFVideoQualityMedium   = 1,
    BFVideoQualityLarge    = 2,
} BFVideoQuality;

@interface BFVideoURLExtractionOperation : BF_AFHTTPRequestOperation

+ (instancetype)startExtractionOperationWithBFVideo:(BFVideo*)video quality:(BFVideoQuality)quality
                                               success:(void (^)(NSURL* videoURL))success
                                               failure:(void (^)(NSError* error))failure;
@end
