// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cross-device sign-in QR bubble header
// summary: Declares the factory that creates the bubble dialog delegate for showing a cross-device sign-in QR code in the browser.
// ---

#ifndef CHROME_BROWSER_UI_SIGNIN_CROSS_DEVICE_SIGNIN_QR_BUBBLE_H_
#define CHROME_BROWSER_UI_SIGNIN_CROSS_DEVICE_SIGNIN_QR_BUBBLE_H_

#include "base/functional/callback_forward.h"
#include "chrome/browser/signin/cross_device_signin_promo_manager.h"
#include "ui/base/interaction/element_identifier.h"
#include "url/gurl.h"

class BrowserWindowInterface;

DECLARE_ELEMENT_IDENTIFIER_VALUE(kCrossDeviceSigninQrBubbleWebViewElementId);

// Creates the delegate for the cross-device sign-in QR code bubble.
// Implemented in
// chrome/browser/ui/views/profiles/cross_device_signin_qr_bubble_views.cc
namespace views {
class BubbleDialogDelegate;
}

std::unique_ptr<views::BubbleDialogDelegate> CreateCrossDeviceSigninQrBubble(
    BrowserWindowInterface* browser,
    GURL qr_code_url,
    base::OnceClosure closing_callback,
    CrossDeviceSigninPromoEntryPoint entry_point);

#endif  // CHROME_BROWSER_UI_SIGNIN_CROSS_DEVICE_SIGNIN_QR_BUBBLE_H_
