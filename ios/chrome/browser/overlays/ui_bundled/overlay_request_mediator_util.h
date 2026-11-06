// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Overlay request mediator utility header
// summary: Declares utilities that aggregate OverlayRequestSupport across mediator classes and find or create a mediator for a given overlay request.
// ---

#ifndef IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_OVERLAY_REQUEST_MEDIATOR_UTIL_H_
#define IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_OVERLAY_REQUEST_MEDIATOR_UTIL_H_

#import <Foundation/Foundation.h>

#include <memory>

@class OverlayRequestMediator;
class OverlayRequest;
class OverlayRequestSupport;

// Returns an OverlayRequestSupport aggregating the support from all
// OverlayRequestMediators in `mediator_classes`.  Used to create the support
// for OverlayRequestCoordinators that manage more than one
// OverlayRequestMediator type.
std::unique_ptr<OverlayRequestSupport> CreateAggregateSupportForMediators(
    NSArray<Class>* mediator_classes);

// Iterates through the OverlayRequestMediator classes in `mediator_classes`,
// searching for one that supports `request`.  If one is found, returns a new
// instance of the mediator for that request.  Otherwise, returns nil.
OverlayRequestMediator* GetMediatorForRequest(NSArray<Class>* mediator_classes,
                                              OverlayRequest* request);

#endif  // IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_OVERLAY_REQUEST_MEDIATOR_UTIL_H_
