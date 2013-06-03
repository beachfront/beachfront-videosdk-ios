//
//  BFCommon.h
//  BeachFrontBuilderSDK
//
//  Created by Sumeru Chatterjee on 4/25/13.
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
int BFIsInDebugger(void);
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

#define STRINGFROMNUMBER(lvalue,rvalue)         if(rvalue&&[rvalue isKindOfClass:[NSNumber class]]){lvalue = [(NSNumber*)rvalue stringValue];}
#define STRINGFROMSTRING(lvalue,rvalue)         if(rvalue&&[rvalue isKindOfClass:[NSString class]]){lvalue = rvalue;}
#define NUMBERFROMNUMBER(lvalue,rvalue)         if(rvalue&&[rvalue isKindOfClass:[NSNumber class]]){lvalue = rvalue;}
#define ARRAYFROMARRAY(lvalue,rvalue)           if(rvalue&&[rvalue isKindOfClass:[NSArray class]]) {lvalue = rvalue;}
#define INTEGERFROMNUMBER(lvalue,rvalue)        if(rvalue&&[rvalue isKindOfClass:[NSNumber class]]){lvalue = [(NSNumber*)rvalue integerValue];}
#define DATEFROMUTCSTRING(lvalue,rvalue)        if(rvalue&&[rvalue isKindOfClass:[NSString class]]){lvalue = BFDateFromUTCDateString(rvalue);}
#define DECIMALNUMBERFROMSTRING(lvalue,rvalue)  if(rvalue&&[rvalue isKindOfClass:[NSString class]]){lvalue = BFDecimalNumberFromString(rvalue);}
#define BOOLFROMNUMBER(lvalue,rvalue)           if(rvalue&&[rvalue isKindOfClass:[NSNumber class]]){lvalue = [(NSNumber*)rvalue boolValue];}

/*!
 This method takes in a url query string and returns a dictionary that has all the query 
 parameters. It also url escapes the values.
 */
NSDictionary* BFQueryContentsFromQueryString(NSString* string);
/*!
 URLEncodes a query string.
 */
NSString* BFURLEncodedQueryStringFromString(NSString *string);
/*!
 Takes a string and returns its base-64 encoded sha256 hash
 */
NSString* BFBase64EncodedSHA256HashFromString(NSString *string);
/*!
 Takes a UTC date string and returns an NSDate object
 */
NSDate*   BFDateFromUTCDateString(NSString* dateString);
/*!
 Takes a string and converts it into a decimal number
 */
NSNumber* BFDecimalNumberFromString(NSString* string);
/*!
 Takes an object and creates an automatic description string for it. The description string contains a dictionary
 representation of all the object's ivars and their values. The ivars of the super class and their super classes 
 are not included in the description string.
 */
NSString* BFAutoDescriptionForObject(NSObject* object);
/*!
 Creates and returns a u brand new unique identifier.
 */
NSString* BFGetUUIDString();
/*!
 Gets an image from the BeachFrontBuilderSDK Bundle
 */
UIImage*  BFGetImageFromBundle(NSString* imageName);
/*!
 Trims the black pixels in an image
 */
UIImage*  BFGetImageByTrimmingBlackPixels(UIImage* image);
/*!
 Returns a BeachFrontBuilder localized string.
 */
NSString* BFLocalizedString(NSString* key, NSString* comment);
/*!
 Returns a relative time with respect to the current time from the give date. Ex. 5 minutes ago, 2 hours later.
 */
NSString* BFRelativeTimeFromDate(NSDate* date);
/*!
 Takes in a time interval and returns it in the form of <hours>h<minutes> or <minutes>m<seconds>s Ex1h21m)
 */
NSString* BFFormattedTimeFromTimeInterval(NSTimeInterval interval);
/*!
 Returns toolbar height for an orientation
 */
CGFloat BFToolbarHeightForOrientation(UIInterfaceOrientation orientation);
/*!
 Returns true for ipad
 */
BOOL BFIsPad();
