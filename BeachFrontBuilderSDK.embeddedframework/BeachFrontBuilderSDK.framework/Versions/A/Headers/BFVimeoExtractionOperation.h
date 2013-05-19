//
//  BFVimeoExtractionOperation.h
//  BeachFrontBuilderSDK
//
//  Created by samyzee on 5/18/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <BeachFrontBuilderSDK/BFVideoURLExtractionOperation.h>

extern NSInteger const BFVimeoExtractionErrorHTMLParseFailure;
extern NSInteger const BFVimeoExtractionErrorRedirectFailure;

@interface BFVimeoExtractionOperation : BFVideoURLExtractionOperation
+ (instancetype)startExtractionOperationWithVimeoURL:(NSURL*)vimeoURL quality:(BFVideoQuality)quality
                                               success:(void (^)(NSURL* videoURL))success
                                               failure:(void (^)(NSError* error))failure;

-(id)initWithVimeoURL:(NSURL*)vimeoURL quality:(BFVideoQuality)quality;
@property (nonatomic, readonly) BFVideoQuality quality;
@property (nonatomic, readonly) NSURL *extractedURL;
@property (nonatomic, readonly) NSError *extractionError;
@end