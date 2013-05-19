//
//  BFBuildInfo.h
//  BeachFrontBuilderSDK
//
//  Created by samyzee on 5/1/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BFBuildInfo : NSObject

@property (nonatomic,strong) NSString* aboutURL;
@property (nonatomic,strong) NSString* buildDescription;
@property (nonatomic,strong) NSString* facebookURL;
@property (nonatomic,strong) NSString* faqURL;
@property (nonatomic,strong) NSString* feedbackEmail;
@property (nonatomic,strong) NSString* buildID;
@property (nonatomic,strong) NSString* name;
@property (nonatomic,strong) NSArray* shareConfigs;
@property (nonatomic,assign) BOOL showAboutPage;
@property (nonatomic,assign) BOOL tapjoyEnabled;
@property (nonatomic,strong) NSString* tapjoyID;
@property (nonatomic,strong) NSString* tapjoySecretKey;
@property (nonatomic,strong) NSString* twitterURL;
@property (nonatomic,strong) NSString* URL;
@property (nonatomic,assign) BOOL watchLaterEnabled;
@property (nonatomic,strong) NSString* youtubeURL;

-(id)initWithEntry:(NSDictionary*)entry;
@end
