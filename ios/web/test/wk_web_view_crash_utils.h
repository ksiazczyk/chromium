// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WKWebView crash simulation test utilities header
// summary: Declares test helpers in the web namespace to simulate a WKWebView crash and to build terminated or healthy mock WKWebView objects for iOS web tests.
// ---

#ifndef IOS_WEB_TEST_WK_WEB_VIEW_CRASH_UTILS_H_
#define IOS_WEB_TEST_WK_WEB_VIEW_CRASH_UTILS_H_

#import <WebKit/WebKit.h>

namespace web {

// Simulates WKWebView crash by calling its private API.
void SimulateWKWebViewCrash(WKWebView* webView);

// Returns a specialized WKWebView mock object with overridden JavaScript
// evaluation method that fails with WKErrorWebContentProcessTerminated error.
WKWebView* BuildTerminatedWKWebView();

// Returns a specialized WKWebView mock object with overridden JavaScript
// evaluation method that always succeeds with nil result.
WKWebView* BuildHealthyWKWebView();
}  // namespace web

#endif  // IOS_WEB_TEST_WK_WEB_VIEW_CRASH_UTILS_H_
