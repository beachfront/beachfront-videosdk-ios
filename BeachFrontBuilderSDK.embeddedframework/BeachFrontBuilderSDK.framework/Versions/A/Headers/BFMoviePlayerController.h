//
//  BFMoviePlayerController.h
//  BeachFrontBuilderSDK
//
//  Created by samyzee on 5/3/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import "BFYouTubeExtractor.h"

@protocol BFMoviePlayerControllerDelegate;

@interface BFMoviePlayerController : MPMoviePlayerController <BFYouTubeExtractorDelegate> {
    BFYouTubeExtractor* extractor;
    id <BFMoviePlayerControllerDelegate> __unsafe_unretained delegate;
}

@property (nonatomic, strong, readonly) BFYouTubeExtractor* extractor;
@property (nonatomic, unsafe_unretained) IBOutlet id <BFMoviePlayerControllerDelegate> delegate;

-(id)initWithYouTubeURL:(NSURL*)youTubeURL quality:(BFYouTubeVideoQuality)quality;
-(id)initWithYouTubeID:(NSString*)youTubeID quality:(BFYouTubeVideoQuality)quality;

@end
@protocol BFMoviePlayerControllerDelegate <NSObject>

-(void)youTubePlayerViewController:(BFMoviePlayerController *)controller didSuccessfullyExtractYouTubeURL:(NSURL *)videoURL;
-(void)youTubePlayerViewController:(BFMoviePlayerController *)controller failedExtractingYouTubeURLWithError:(NSError *)error;

@end