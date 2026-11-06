// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Captive portal helper interface
// summary: Declares IsBehindCaptivePortal, which reports whether the OS says the device is behind a captive portal.
// ---

#ifndef COMPONENTS_SECURITY_INTERSTITIALS_CONTENT_CAPTIVE_PORTAL_HELPER_H_
#define COMPONENTS_SECURITY_INTERSTITIALS_CONTENT_CAPTIVE_PORTAL_HELPER_H_

namespace security_interstitials {

// Returns true if the OS reports that the device is behind a captive portal.
bool IsBehindCaptivePortal();

}  // namespace security_interstitials

#endif  // COMPONENTS_SECURITY_INTERSTITIALS_CONTENT_CAPTIVE_PORTAL_HELPER_H_
