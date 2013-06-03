//
//  BFDailyMotionExtractionOperation.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 5/18/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <BeachFrontBuilderSDK/BFVideoURLExtractionOperation.h>

@interface BFDailyMotionExtractionOperation : BFVideoURLExtractionOperation
+ (instancetype)startExtractionOperationWithDailyMotionURL:(NSURL*)dailyMotionURL quality:(BFVideoQuality)quality
                                                   success:(void (^)(NSURL* videoURL))success
                                                   failure:(void (^)(NSError* error))failure;

-(id)initWithDailyMotionURL:(NSURL*)dailyMotionURL quality:(BFVideoQuality)quality;
@end
