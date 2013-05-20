//
//  BFVideo.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 4/24/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <Foundation/NSObject.h>

@interface BFVideo : NSObject
@property (nonatomic,copy)   NSString*  videoID;
@property (nonatomic,copy)   NSString*  title;
@property (nonatomic,copy)   NSString*  url;
@property (nonatomic,copy)   NSString*  thumbnail;
@property (nonatomic,copy)   NSString*  videoDescription;
@property (nonatomic,copy)   NSString*  embed;
@property (nonatomic,copy)   NSDate*    publishDate;
@property (nonatomic,copy)   NSDate*    added;
@property (nonatomic,copy)   NSString*  membed;
@property (nonatomic,copy)   NSNumber*  views;
@property (nonatomic,copy)   NSNumber*  likes;
@property (nonatomic,copy)   NSString*  etc;
@property (nonatomic,copy)   NSString*  remoteId;
@property (nonatomic,copy)   NSString*  remoteStatus;
@property (nonatomic,copy)   NSString*  sourceType;
@property (nonatomic,copy)   NSNumber*  duration;
@property (nonatomic,copy)   NSString*  shareURL;
@property (nonatomic,copy)   NSNumber*  dislikes;
@property (nonatomic,copy)   NSNumber*  comments;
@property (nonatomic,assign) BOOL       featured;
@property (nonatomic,copy)   NSString*  channelName;
@property (nonatomic,copy)   NSString*  channelImage;
@property (nonatomic,copy)   NSNumber*  channelTotalSubscribers;
@property (nonatomic,copy)   NSNumber*  channelTotalViews;

-(id)initWithEntry:(NSDictionary*)entry;
@end
