//
//  RNiBeacon.h
//  RNiBeacon
//
//  Created by MacKentoch on 17/02/2017.
//  Copyright © 2017 Erwan DATIN. All rights reserved.
//

#import <Foundation/Foundation.h>
#if __has_include("RCTEventEmitter.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif

#if __has_include("RCTEventEmitter.h")
#import "RCTEventEmitter.h"
#else
#import <React/RCTEventEmitter.h>
#endif

@interface RNiBeacon : RCTEventEmitter <RCTBridgeModule>

@end
