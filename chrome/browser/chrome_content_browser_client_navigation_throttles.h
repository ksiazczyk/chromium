// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Navigation throttle registration header
// summary: Declares functions that add Chrome navigation throttles for regular navigations and for commits that occur without a URL loader.
// ---

#ifndef CHROME_BROWSER_CHROME_CONTENT_BROWSER_CLIENT_NAVIGATION_THROTTLE_H_
#define CHROME_BROWSER_CHROME_CONTENT_BROWSER_CLIENT_NAVIGATION_THROTTLE_H_

namespace content {
class NavigationThrottleRegistry;
}  // namespace content

void CreateAndAddChromeThrottlesForNavigation(
    content::NavigationThrottleRegistry& registry);

// Adds the Chrome NavigationThrottles that need to observe navigations which
// commit without a URL loader (via NavigationThrottle::
// WillCommitWithoutUrlLoader()).
void CreateAndAddChromeThrottlesForCommitWithoutUrlLoader(
    content::NavigationThrottleRegistry& registry);

#endif  // CHROME_BROWSER_CHROME_CONTENT_BROWSER_CLIENT_NAVIGATION_THROTTLE_H_