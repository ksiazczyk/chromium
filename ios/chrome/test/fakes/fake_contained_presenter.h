// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake contained presenter header
// summary: Declares a test fake ContainedPresenter that records whether the last presentation call was animated.
// ---

#ifndef IOS_CHROME_TEST_FAKES_FAKE_CONTAINED_PRESENTER_H_
#define IOS_CHROME_TEST_FAKES_FAKE_CONTAINED_PRESENTER_H_

#import <Foundation/Foundation.h>

#import "ios/chrome/browser/presenters/ui_bundled/contained_presenter.h"

// ContainedPresenter used for testing.
@interface FakeContainedPresenter : NSObject <ContainedPresenter>
// YES if `presentAnimated:` was called with YES.
@property(nonatomic, assign) BOOL lastPresentationWasAnimated;
@end

#endif  // IOS_CHROME_TEST_FAKES_FAKE_CONTAINED_PRESENTER_H_
