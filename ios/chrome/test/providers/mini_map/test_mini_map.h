// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mini map test provider header
// summary: Declares the MiniMapControllerFactory protocol and a helper to install a global test factory that replaces mini map providers in tests.
// ---

#ifndef IOS_CHROME_TEST_PROVIDERS_MINI_MAP_TEST_MINI_MAP_H_
#define IOS_CHROME_TEST_PROVIDERS_MINI_MAP_TEST_MINI_MAP_H_

#import "ios/public/provider/chrome/browser/mini_map/mini_map_api.h"

class GURL;

// A protocol to replace the Mini Map providers in tests.
@protocol MiniMapControllerFactory <NSObject>

- (id<MiniMapController>)createMiniMapController;

- (BOOL)canHandleURL:(NSURL*)url;

@optional
- (GURL)URLByAppendingCampaignTokenIfNeeded:(const GURL&)url;
- (BOOL)URLHasCampaignToken:(const GURL&)url;
- (BOOL)isMapsNativePreviewBypassEnabled;

@end

namespace ios {
namespace provider {
namespace test {

// Sets the global factory for the tests.
// Resets it if `factory` is nil.
void SetMiniMapControllerFactory(id<MiniMapControllerFactory> factory);

}  // namespace test
}  // namespace provider
}  // namespace ios

#endif  // IOS_CHROME_TEST_PROVIDERS_MINI_MAP_TEST_MINI_MAP_H_
