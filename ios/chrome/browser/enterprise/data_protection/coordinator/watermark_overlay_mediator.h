// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WatermarkOverlayMediator header
// summary: Declares the mediator that supplies watermark text and style updates from an overlay request and pref service to a consumer.
// ---

#ifndef IOS_CHROME_BROWSER_ENTERPRISE_DATA_PROTECTION_COORDINATOR_WATERMARK_OVERLAY_MEDIATOR_H_
#define IOS_CHROME_BROWSER_ENTERPRISE_DATA_PROTECTION_COORDINATOR_WATERMARK_OVERLAY_MEDIATOR_H_

#import <Foundation/Foundation.h>

class OverlayRequest;
class PrefService;
@protocol WatermarkConsumer;

// The mediator for the enterprise watermark overlay.
@interface WatermarkOverlayMediator : NSObject

// The consumer to receive watermark text and style updates.
@property(nonatomic, weak) id<WatermarkConsumer> consumer;

- (instancetype)initWithRequest:(OverlayRequest*)request
                    prefService:(PrefService*)prefService
    NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

// Disconnects the mediator.
- (void)disconnect;

@end

#endif  // IOS_CHROME_BROWSER_ENTERPRISE_DATA_PROTECTION_COORDINATOR_WATERMARK_OVERLAY_MEDIATOR_H_
