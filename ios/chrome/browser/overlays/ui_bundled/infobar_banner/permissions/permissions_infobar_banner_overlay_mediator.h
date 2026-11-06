// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Permissions banner overlay mediator header
// summary: Declares PermissionsBannerOverlayMediator, which configures the permissions infobar banner and holds handlers for page action menu and page info commands.
// ---

#ifndef IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_INFOBAR_BANNER_PERMISSIONS_PERMISSIONS_INFOBAR_BANNER_OVERLAY_MEDIATOR_H_
#define IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_INFOBAR_BANNER_PERMISSIONS_PERMISSIONS_INFOBAR_BANNER_OVERLAY_MEDIATOR_H_

#import "ios/chrome/browser/overlays/ui_bundled/infobar_banner/infobar_banner_overlay_mediator.h"

@protocol PageActionMenuCommands;
@protocol PageInfoCommands;

// Mediator that configures an infobar banner for the permissions infobar.
@interface PermissionsBannerOverlayMediator : InfobarBannerOverlayMediator

// Handler for page action menu commands.
@property(nonatomic, weak) id<PageActionMenuCommands> pageActionMenuHandler;

// Handler for page info commands.
@property(nonatomic, weak) id<PageInfoCommands> pageInfoHandler;

@end

#endif  // IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_INFOBAR_BANNER_PERMISSIONS_PERMISSIONS_INFOBAR_BANNER_OVERLAY_MEDIATOR_H_
