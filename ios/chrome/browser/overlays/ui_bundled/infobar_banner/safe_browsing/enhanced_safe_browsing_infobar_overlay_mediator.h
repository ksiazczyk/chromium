// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Enhanced Safe Browsing banner overlay mediator header
// summary: Declares EnhancedSafeBrowsingBannerOverlayMediator, a subclass of InfobarBannerOverlayMediator that configures banners for Enhanced Safe Browsing infobars.
// ---

#ifndef IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_INFOBAR_BANNER_SAFE_BROWSING_ENHANCED_SAFE_BROWSING_INFOBAR_OVERLAY_MEDIATOR_H_
#define IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_INFOBAR_BANNER_SAFE_BROWSING_ENHANCED_SAFE_BROWSING_INFOBAR_OVERLAY_MEDIATOR_H_

#import "ios/chrome/browser/overlays/ui_bundled/infobar_banner/infobar_banner_overlay_mediator.h"

// Mediator that configures an infobar banner for an Enhanced Safe Browsing
// infobar.
@interface EnhancedSafeBrowsingBannerOverlayMediator
    : InfobarBannerOverlayMediator
@end

#endif  // IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_INFOBAR_BANNER_SAFE_BROWSING_ENHANCED_SAFE_BROWSING_INFOBAR_OVERLAY_MEDIATOR_H_
