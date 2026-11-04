// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser NTP promo registration header
// summary: Declares MaybeRegisterNtpPromos, which initializes New Tab Page promos for the browser.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_USER_EDUCATION_BROWSER_NTP_PROMOS_H_
#define CHROME_BROWSER_UI_VIEWS_USER_EDUCATION_BROWSER_NTP_PROMOS_H_

namespace user_education {
class NtpPromoRegistry;
}

// Initialize NTP promos for the browser.
void MaybeRegisterNtpPromos(user_education::NtpPromoRegistry& registry);

#endif  // CHROME_BROWSER_UI_VIEWS_USER_EDUCATION_BROWSER_NTP_PROMOS_H_
