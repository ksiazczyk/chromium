// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This class sets up the environment for running the native tests inside an
// android application. It outputs (to a fifo) markers identifying the
// START/PASSED/CRASH of the test suite, FAILURE/SUCCESS of individual tests,
// etc.
// These markers are read by the test runner script to generate test results.
// It installs signal handlers to detect crashes.

// ---docerion
// type: source
// title: Native support for Android browser test startup and teardown
// summary: Implements JNI hooks that track Java async startup completion and activity teardown for Android browser tests, used to coordinate test execution.
// ---

#include "base/android/jni_android.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "testing/android/native_test/native_browser_test_jni/NativeBrowserTest_jni.h"

namespace testing {
namespace android {

namespace {

// Java calls to set this true when async startup tasks are done for browser
// tests.
bool g_java_startup_tasks_complete = false;
bool g_activity_teardown_complete = false;

}  // namespace

static void JNI_NativeBrowserTest_JavaStartupTasksCompleteForBrowserTests(
    JNIEnv* env) {
  g_java_startup_tasks_complete = true;
}

static void JNI_NativeBrowserTest_ActivityTeardownCompleteForBrowserTests(
    JNIEnv* env) {
  g_activity_teardown_complete = true;
}

bool JavaAsyncStartupTasksCompleteForBrowserTests() {
  return g_java_startup_tasks_complete;
}

bool JavaActivityTeardownCompleteForBrowserTests() {
  return g_activity_teardown_complete;
}

void RunActivityTeardownCallback() {
  JNIEnv* env = base::android::AttachCurrentThread();
  Java_NativeBrowserTest_runActivityTeardownCallback(env);
}

}  // namespace android
}  // namespace testing

DEFINE_JNI(NativeBrowserTest)
