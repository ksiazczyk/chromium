// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PromosManagerUIHandler protocol header
// summary: Declares the PromosManagerUIHandler Objective-C protocol with a promoWasDismissed callback so promos can notify the Promos Manager when they are dismissed.
// ---

#ifndef IOS_CHROME_BROWSER_PROMOS_MANAGER_COORDINATOR_PROMOS_MANAGER_UI_HANDLER_H_
#define IOS_CHROME_BROWSER_PROMOS_MANAGER_COORDINATOR_PROMOS_MANAGER_UI_HANDLER_H_

@protocol PromosManagerUIHandler

// Alerts that the current promo was dismissed.
- (void)promoWasDismissed;

@end

#endif  // IOS_CHROME_BROWSER_PROMOS_MANAGER_COORDINATOR_PROMOS_MANAGER_UI_HANDLER_H_
