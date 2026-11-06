// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Side swipe mediator testing category
// summary: Testing category that exposes the private navigation edge swipe update method of SideSwipeMediator for use in tests.
// ---

#ifndef IOS_CHROME_BROWSER_SIDE_SWIPE_UI_BUNDLED_SIDE_SWIPE_MEDIATOR_TESTING_H_
#define IOS_CHROME_BROWSER_SIDE_SWIPE_UI_BUNDLED_SIDE_SWIPE_MEDIATOR_TESTING_H_

namespace web {
class WebState;
}  // namespace web

// Testing category to expose private methods of SideSwipeMediator
// for tests.
@interface SideSwipeMediator (Testing)

- (void)updateNavigationEdgeSwipeForWebState:(web::WebState*)webState;

@end

#endif  // IOS_CHROME_BROWSER_SIDE_SWIPE_UI_BUNDLED_SIDE_SWIPE_MEDIATOR_TESTING_H_
