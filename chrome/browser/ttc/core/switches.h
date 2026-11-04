// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TTC command-line switch definitions
// summary: Declares the enable-ttc-test-api command-line switch that enables the TTC evaluation test harness API on eval harness WebUI.
// ---

#ifndef CHROME_BROWSER_TTC_CORE_SWITCHES_H_
#define CHROME_BROWSER_TTC_CORE_SWITCHES_H_

namespace ttc::switches {

// Enables the TTC evaluation test harness API on eval harness WebUI.
inline constexpr char kEnableTtcTestApi[] = "enable-ttc-test-api";

}  // namespace ttc::switches

#endif  // CHROME_BROWSER_TTC_CORE_SWITCHES_H_
