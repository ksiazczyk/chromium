// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Distiller referrer navigation throttle header
// summary: Declares a navigation throttle that passes the distilled page's original URL as the referrer for chrome-distiller pages.
// ---

#ifndef COMPONENTS_DOM_DISTILLER_CONTENT_BROWSER_DISTILLER_REFERRER_THROTTLE_H_
#define COMPONENTS_DOM_DISTILLER_CONTENT_BROWSER_DISTILLER_REFERRER_THROTTLE_H_

#include "content/public/browser/navigation_throttle.h"

namespace content {
class NavigationThrottleRegistry;
}  // namespace content

namespace dom_distiller {

// Responsible for passing the original URL of the distilled page to the
// referrer request header for chrome-distiller pages.
class DistillerReferrerThrottle : public content::NavigationThrottle {
 public:
  static void MaybeCreateAndAdd(content::NavigationThrottleRegistry& registry);

  explicit DistillerReferrerThrottle(
      content::NavigationThrottleRegistry& registry);
  ~DistillerReferrerThrottle() override;

  // content::NavigationThrottle:
  ThrottleCheckResult WillStartRequest() override;
  const char* GetNameForLogging() override;

  DistillerReferrerThrottle(const DistillerReferrerThrottle&) = delete;
  DistillerReferrerThrottle& operator=(const DistillerReferrerThrottle&) =
      delete;
};

}  // namespace dom_distiller

#endif  // COMPONENTS_DOM_DISTILLER_CONTENT_BROWSER_DISTILLER_REFERRER_THROTTLE_H_
