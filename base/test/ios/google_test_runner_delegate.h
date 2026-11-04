// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: GoogleTestRunnerDelegate protocol
// summary: Declares the protocol an app delegate implements to indicate support for and run Google tests on iOS.
// ---

#ifndef BASE_TEST_IOS_GOOGLE_TEST_RUNNER_DELEGATE_H_
#define BASE_TEST_IOS_GOOGLE_TEST_RUNNER_DELEGATE_H_

@protocol GoogleTestRunnerDelegate

// Returns YES if this delegate supports running GoogleTests via a call to
// |runGoogleTests|.
@property(nonatomic, readonly, assign) BOOL supportsRunningGoogleTests;

// Runs GoogleTests and returns the final exit code.
- (int)runGoogleTests;

@end

#endif  // BASE_TEST_IOS_GOOGLE_TEST_RUNNER_DELEGATE_H_
