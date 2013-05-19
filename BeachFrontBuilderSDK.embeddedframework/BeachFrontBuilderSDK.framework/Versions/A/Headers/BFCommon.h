//
//  BFCommon.h
//  BeachFrontBuilderSDK
//
//  Created by samyzee on 4/25/13.
//  Copyright (c) 2013 Beachfront Media LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#ifdef DEBUG
#define BFPRINT(xx, ...)  NSLog(@"%s(%d): " xx, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define BFPRINT(xx, ...)  ((void)0)
#endif

#ifdef DEBUG
#import <TargetConditionals.h>
#if TARGET_IPHONE_SIMULATOR
// We leave the __asm__ in this macro so that when a break occurs, we don't have to step out of
// a "breakInDebugger" function.
#define BFASSERT(xx) { if (!(xx)) { BFPRINT(@"BFASSERT failed: %s", #xx); \
if (BFIsInDebugger()) { __asm__("int $3\n" : : ); }; } \
} ((void)0)
#else
#define BFASSERT(xx) { if (!(xx)) { BFPRINT(@"BFASSERT failed: %s", #xx); } } ((void)0)
#endif

#else
#define BFASSERT(xx) ((void)0)
#endif 


#define BF_FIX_CATEGORY_BUG(name) @interface BF_FIX_CATEGORY_BUG_##name @end @implementation BF_FIX_CATEGORY_BUG_##name @end

#define STRINGFROMNUMBER(lvalue,rvalue)         if(rvalue&&[rvalue isKindOfClass:[NSNumber class]]){lvalue = [(NSNumber*)rvalue stringValue];}
#define STRINGFROMSTRING(lvalue,rvalue)         if(rvalue&&[rvalue isKindOfClass:[NSString class]]){lvalue = rvalue;}
#define NUMBERFROMNUMBER(lvalue,rvalue)         if(rvalue&&[rvalue isKindOfClass:[NSNumber class]]){lvalue = rvalue;}
#define ARRAYFROMARRAY(lvalue,rvalue)           if(rvalue&&[rvalue isKindOfClass:[NSArray class]]) {lvalue = rvalue;}
#define INTEGERFROMNUMBER(lvalue,rvalue)        if(rvalue&&[rvalue isKindOfClass:[NSNumber class]]){lvalue = [(NSNumber*)rvalue integerValue];}
#define DATEFROMUTCSTRING(lvalue,rvalue)        if(rvalue&&[rvalue isKindOfClass:[NSString class]]){lvalue = BFDateFromUTCDateString(rvalue);}
#define DECIMALNUMBERFROMSTRING(lvalue,rvalue)  if(rvalue&&[rvalue isKindOfClass:[NSString class]]){lvalue = BFDecimalNumberFromString(rvalue);}
#define BOOLFROMNUMBER(lvalue,rvalue)           if(rvalue&&[rvalue isKindOfClass:[NSNumber class]]){lvalue = [(NSNumber*)rvalue boolValue];}

int BFIsInDebugger(void);

NSDictionary* BFQueryContentsFromQueryString(NSString* string);

NSString* BFURLEncodedQueryStringFromString(NSString *string);

NSString* BFBase64EncodedSHA256HashFromString(NSString *string);

NSDate*   BFDateFromUTCDateString(NSString* dateString);

NSNumber* BFDecimalNumberFromString(NSString* string);

NSString* BFAutoDescriptionForObject(NSObject* object);

NSError*  BFAPIErrorWithDescription(NSString* description);

NSError*  BFAnalyticsAPIErrorWithDescription(NSString* description);

NSString* BFGetUUIDString();

UIImage*  BFGetImageFromBundle(NSString* imageName);

UIImage*  BFGetImageByTrimmingBlackPixels(UIImage* image);

NSString* BFLocalizedString(NSString* key, NSString* comment);

NSString* BFRelativeTimeFromDate(NSDate* date);

NSString* BFFormattedTimeFromTimeInterval(NSTimeInterval interval);
