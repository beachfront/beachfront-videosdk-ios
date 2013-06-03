//
//  BFVimeoExtractionOperation.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 5/18/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <BeachFrontBuilderSDK/BFVideoURLExtractionOperation.h>

extern NSInteger const BFVimeoExtractionErrorHTMLParseFailure;
extern NSInteger const BFVimeoExtractionErrorRedirectFailure;

@interface BFVimeoExtractionOperation : BFVideoURLExtractionOperation
+ (BF_AFHTTPRequestOperation*)startExtractionOperationWithVimeoID:(NSString*)vimeoID
                                                        quality:(BFVideoQuality)quality
                                                        success:(void (^)(NSURL* videoURL))success
                                                        failure:(void (^)(NSError* error))failure;

-(id)initWithVimeoID:(NSString*)vimeoID quality:(BFVideoQuality)quality;
@property (nonatomic, readonly) BFVideoQuality quality;
@end