// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Gemini Enterprise URL host allowlist
// summary: Declares IsAllowedGeminiEnterpriseHost, which checks whether a URL host may serve the Gemini Enterprise web application.
// ---

#ifndef CHROME_BROWSER_GLIC_GEMINI_ENTERPRISE_GEIC_URL_ALLOWLIST_H_
#define CHROME_BROWSER_GLIC_GEMINI_ENTERPRISE_GEIC_URL_ALLOWLIST_H_

class GURL;

namespace geic {

// Returns true if `url`'s host is one that may serve the Gemini Enterprise web
// application. Only the host is checked; callers are responsible for scheme
// and other URL requirements.
bool IsAllowedGeminiEnterpriseHost(const GURL& url);

}  // namespace geic

#endif  // CHROME_BROWSER_GLIC_GEMINI_ENTERPRISE_GEIC_URL_ALLOWLIST_H_
