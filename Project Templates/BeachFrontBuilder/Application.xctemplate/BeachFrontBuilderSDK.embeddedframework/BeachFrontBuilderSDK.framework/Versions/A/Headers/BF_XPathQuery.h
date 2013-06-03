//
//  XPathQuery.h
//  FuelFinder
//
//  Created by Matt Gallagher on 4/08/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

NSArray *BF_PerformHTMLXPathQuery(NSData *document, NSString *query);
NSArray *BF_PerformHTMLXPathQueryWithEncoding(NSData *document, NSString *query,NSString *encoding);
NSArray *BF_PerformXMLXPathQuery(NSData *document, NSString *query);
NSArray *BF_PerformXMLXPathQueryWithEncoding(NSData *document, NSString *query,NSString *encoding);
