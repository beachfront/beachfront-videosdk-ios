//
//  BFChannel.h
//  BeachFrontBuilderSDK
//
//  Created by samyzee on 4/25/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BFChannel : NSObject
@property (nonatomic,assign) NSInteger order;
@property (nonatomic,copy)   NSString* name;
@property (nonatomic,copy)   NSString* channelID;

-(id)initWithEntry:(NSDictionary*)entry;
@end
