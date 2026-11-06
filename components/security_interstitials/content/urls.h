// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Security interstitials URL constants header
// summary: Declares shared constants for the connection-help WebUI host and the connection monitoring detected host so other security interstitial code can reference them.
// ---

#ifndef COMPONENTS_SECURITY_INTERSTITIALS_CONTENT_URLS_H_
#define COMPONENTS_SECURITY_INTERSTITIALS_CONTENT_URLS_H_

namespace security_interstitials {

extern const char kChromeUIConnectionHelpHost[];
extern const char kChromeUIConnectionHelpURL[];

extern const char kChromeUIConnectionMonitoringDetectedHost[];

}  // namespace security_interstitials

#endif  // COMPONENTS_SECURITY_INTERSTITIALS_CONTENT_URLS_H_
