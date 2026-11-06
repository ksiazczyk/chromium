// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for Android browser test startup and teardown helpers
// summary: Declares functions that report Java async startup completion and trigger and track activity teardown for Android browser tests.
// ---

#ifndef TESTING_ANDROID_NATIVE_TEST_NATIVE_BROWSER_TEST_SUPPORT_H_
#define TESTING_ANDROID_NATIVE_TEST_NATIVE_BROWSER_TEST_SUPPORT_H_

#include <jni.h>

namespace testing {
namespace android {

// Android browser tests must wait for Java async initialization tasks to run
// before running the test. This function returns true in the browser process
// once they are done.
bool JavaAsyncStartupTasksCompleteForBrowserTests();

// Asks the Android test harness to tear down the Activity the tests are
// running in. Will cause JavaActivityTeardownCompleteForBrowserTests to
// eventually return true.
void RunActivityTeardownCallback();

// Returns true when Activity teardown is complete, as triggered by
// RunActivityTeardownCallback.
bool JavaActivityTeardownCompleteForBrowserTests();

}  // namespace android
}  // namespace testing

#endif  // TESTING_ANDROID_NATIVE_TEST_NATIVE_BROWSER_TEST_SUPPORT_H_
