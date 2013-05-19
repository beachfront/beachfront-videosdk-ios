## BeachfrontBuilder iOS SDK usage guide

## Overview
This document details the process of integrating the BeachfrontBuilder SDK with your iOS application. 
:
## Requirements

* BeachFrontBuild App Key & App Build ID - [Get it from here](http://beachfrontbuilder.com/signup)
* BeachFrontBuilder SDK EmbeddedFramework
* Xcode 4.5 or higher

## Installation
1. Access the BeachFrontBuilderSDK Console and get your App Key & App Build ID.
2. Download the BeachFrontBuilder iOS SDK Embedded Framwork and copy it into your project Folder.
3. Add the BeachFrontBuilderSDK.embeddedFramework to your project and include BeachFrontBuilderSDK.framework in the "Link Binary with Libraries" panel in the project "Build Phases" section.
4. Also add Foundation.framework, CoreGraphics.framework, MediaPlayer.framework and UIKit.framework by clicking on the + button in the "Link Binary With Libraries" panel.
  
5. Wherever you want to show a beachfront-io advertisement, import the framework header.
```
#import <BFIOSDK/BFIOSDK.h>
```

6. To show the advertisement simply make a call to the (showAdWithAppID:adUnitID) method
```
- (void)yourMethod {
	...
	...
    
    [BFIOSDK showAdWithAppID:<YOUR APPID HERE> adUnitID:<YOUR ADUNITID HERE>];
    
    ...
    ...
}
```
7. Optionally register for notifications to get notified about bfio ad events. The four available notifications are

	BFAdInterstitialOpenedNotification 		- Fired when an ad interstitial view is opened

	BFAdInterstitialStartedNotification 	- Fired when an ad video starts playing.

	BFAdInterstitialCompleteNotification 	- Fired when an ad video is completed.

	BFAdInterstitialClosedNotification      - Fired when an ad interstitial view is closed.

```	
	...
  
    [[NSNotificationCenter defaultCenter]   addObserver:self
                                               selector:@selector(interstitialOpened:)
                                                   name:BFAdInterstitialOpenedNotification
                                                 object:nil];
    
    [[NSNotificationCenter defaultCenter]addObserver:self
                                            selector:@selector(interstitialClosed:)
                                                name:BFAdInterstitialClosedNotification
                                              object:nil];
    
    [[NSNotificationCenter defaultCenter]   addObserver:self
                                               selector:@selector(interstitialStarted:)
                                                   name:BFAdInterstitialStartedNotification
                                                 object:nil];
    
    [[NSNotificationCenter defaultCenter]   addObserver:self
                                               selector:@selector(interstitialComplete:)
                                                   name:BFAdInterstitialCompleteNotification
                                                 object:nil];
   ...

```

Have a bug? Please [create an issue on GitHub](https://github.com/beachfront/beachfront-io-ios-sdk/issues)!