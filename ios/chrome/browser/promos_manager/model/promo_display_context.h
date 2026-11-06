// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PromoDisplayContext structure declaration
// summary: Declares the PromoDisplayTime enum and PromoDisplayContext struct describing best-effort UI context for showing a promo, such as an unscrolled fresh NTP.
// ---

#ifndef IOS_CHROME_BROWSER_PROMOS_MANAGER_MODEL_PROMO_DISPLAY_CONTEXT_H_
#define IOS_CHROME_BROWSER_PROMOS_MANAGER_MODEL_PROMO_DISPLAY_CONTEXT_H_

enum class PromoDisplayTime {
  kFreshNtp,
};

// Structure holding the context for displaying a promo. This is "best-effort."
// It is possible that race conditions or asynchronous behavior may change
// the UI in between getting the display context and the promo actually being
// displayed.
struct PromoDisplayContext {
  // Whether current display will be on an NTP that hasn't scrolled.
  bool is_on_fresh_ntp = false;
};

#endif  // IOS_CHROME_BROWSER_PROMOS_MANAGER_MODEL_PROMO_DISPLAY_CONTEXT_H_
