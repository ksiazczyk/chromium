// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android WebView browser terminator header
// summary: Declares AwBrowserTerminator, a ChildExitObserver client that makes the WebView browser crash itself when a renderer crash or kill is not handled by the application.
// relations:
//   - depends_on /components/crash/content/browser/child_exit_observer_android.h
// ---

#ifndef ANDROID_WEBVIEW_BROWSER_AW_BROWSER_TERMINATOR_H_
#define ANDROID_WEBVIEW_BROWSER_AW_BROWSER_TERMINATOR_H_

#include "components/crash/content/browser/child_exit_observer_android.h"

namespace android_webview {

// This class manages the browser's behavior in response to renderer exits. If
// the application does not successfully handle a renderer crash/kill, the
// browser needs to crash itself.
// Lifetime: Singleton
class AwBrowserTerminator : public crash_reporter::ChildExitObserver::Client {
 public:
  AwBrowserTerminator();

  AwBrowserTerminator(const AwBrowserTerminator&) = delete;
  AwBrowserTerminator& operator=(const AwBrowserTerminator&) = delete;

  ~AwBrowserTerminator() override;

  // crash_reporter::ChildExitObserver::Client
  void OnChildExit(
      const crash_reporter::ChildExitObserver::TerminationInfo& info) override;
};

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_BROWSER_AW_BROWSER_TERMINATOR_H_
