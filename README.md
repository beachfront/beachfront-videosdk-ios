## BeachfrontBuilder iOS SDK usage guide

## Overview
This document details the process of integrating the BeachfrontBuilder SDK with your iOS application. 
:
## Requirements

* BeachFrontBuilder App Key & App Build ID - [Get it from here](http://beachfrontbuilder.com/signup)
* BeachFrontBuilder SDK EmbeddedFramework
* Xcode 4.5 or higher

## Installation
1. Access the BeachFrontBuilderSDK Console and get your App Key & App Build ID.
2. Download the BeachFrontBuilder iOS SDK Embedded Framwork and copy it into your project Folder.
3. Add the BeachFrontBuilderSDK.embeddedFramework to your project and include BeachFrontBuilderSDK.framework in the "Link Binary with Libraries" panel in the project "Build Phases" section.
4. Also add Foundation.framework, CoreGraphics.framework, MediaPlayer.framework and UIKit.framework by clicking on the + button in the "Link Binary With Libraries" panel.
5. Make sure that the BeachFrontBuilderSDK.bundle is included in the "Copy Bundle Resources" panel.
6. In your prefix header file <PRODUCT-NAME>-prefix.pch, import the framework header.You can also just import the framework header wherever you need it, but we recommend you do it this way.

```
#ifdef __OBJC__
..
..
#import <BeachFrontBuilderSDK/BeachFrontBuilderSDK.h>
#endif
```

Have a bug? Please [create an issue on GitHub](https://github.com/beachfront/BeachFrontBuilder-iOS-SDK/issues)!