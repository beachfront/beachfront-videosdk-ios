//
//  BFConstants.h
//  BeachFrontBuilderSDK
//
//  Created by samyzee on 4/25/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#define BF_MINUTE 60
#define BF_HOUR   (60 * BF_MINUTE)
#define BF_DAY    (24 * BF_HOUR)
#define BF_5_DAYS (5 * BF_DAY)
#define BF_WEEK   (7 * BF_DAY)
#define BF_MONTH  (30.5 * BF_DAY)
#define BF_YEAR   (365 * BF_DAY)

//Builder API Constants
extern NSString* const kBFApiBaseURL;
extern NSString* const kBFApiCommonPath;
extern NSString* const kBFApiStatusSucess;
extern NSString* const kBFApiErrorDomain;
extern NSInteger const kBFApiError;
extern NSInteger const kBFApiErrorAccessKey;
extern NSInteger const kBFAPIResultsPerPage;

//Analytics API Constants
extern NSString* const kBFAnalyticsApiBaseURL;
extern NSString* const kBFAnalyticsApiCommonPath;
extern NSString* const kBFAnalyticsApiErrorDomain;
extern NSInteger const kBFAnalyticsApiError;

//Bundle
extern NSString* const kBeachFrontBuilderBundlePath;
extern NSString* const kBeachFrontBuilderBundleName;
