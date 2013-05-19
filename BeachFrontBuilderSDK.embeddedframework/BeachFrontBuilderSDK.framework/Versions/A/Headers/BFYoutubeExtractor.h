//
//  BFYoutubeExtractor.h
//  BeachFrontBuilderSDK
//
//  Created by samyzee on 5/3/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^BFYouTubeExtractorCompletionBlock)(NSURL *videoURL, NSError *error);

typedef enum {
    BFYouTubeVideoQualitySmall    = 0,
    BFYouTubeVideoQualityMedium   = 1,
    BFYouTubeVideoQualityLarge    = 2,
} BFYouTubeVideoQuality;

@protocol BFYouTubeExtractorDelegate;

@interface BFYouTubeExtractor : NSObject {
    BFYouTubeVideoQuality quality;
    NSURL* youTubeURL;
    NSURL* extractedURL;
    id <BFYouTubeExtractorDelegate> __unsafe_unretained delegate;
}

@property (nonatomic, readonly) BFYouTubeVideoQuality quality;
@property (nonatomic, strong, readonly) NSURL* youTubeURL;
@property (nonatomic, strong, readonly) NSURL *extractedURL;
@property (nonatomic, unsafe_unretained) IBOutlet id <BFYouTubeExtractorDelegate> delegate;
@property (nonatomic, strong) BFYouTubeExtractorCompletionBlock completionBlock;

-(id)initWithURL:(NSURL*)videoURL quality:(BFYouTubeVideoQuality)quality;
-(id)initWithID:(NSString*)videoID quality:(BFYouTubeVideoQuality)quality;

-(void)startExtracting;
-(void)stopExtracting;

- (void)extractVideoURLWithCompletionBlock:(BFYouTubeExtractorCompletionBlock)completionBlock;

@end
@protocol BFYouTubeExtractorDelegate <NSObject>

-(void)youTubeExtractor:(BFYouTubeExtractor *)extractor didSuccessfullyExtractYouTubeURL:(NSURL *)videoURL;
-(void)youTubeExtractor:(BFYouTubeExtractor *)extractor failedExtractingYouTubeURLWithError:(NSError *)error;

@end