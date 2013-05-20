//
//  BFVideoURLFetchOperation.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 5/19/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <BeachFrontBuilderSDK/BF_AFHTTPRequestOperation.h>
#import <BeachFrontBuilderSDK/BFVideo.h>

@interface BFVideoURLFetchOperation : BF_AFHTTPRequestOperation
+ (BF_AFHTTPRequestOperation*)startURLFetchOperationWithBFVideo:(BFVideo*)video
                                          success:(void (^)(NSURL* videoURL,NSData* videoHTMLData))success
                                          failure:(void (^)(NSError* error,NSData* videoHTMLData))failure;

-(id)initWithVideo:(BFVideo*)video;
@end
