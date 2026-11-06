// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: JavaScriptConsoleFeatureDelegate interface header
// summary: Declares the JavaScriptConsoleFeatureDelegate interface whose DidReceiveConsoleMessage callback is invoked when a JavaScript message is logged.
// ---

#ifndef IOS_CHROME_BROWSER_WEB_MODEL_JAVA_SCRIPT_CONSOLE_JAVA_SCRIPT_CONSOLE_FEATURE_DELEGATE_H_
#define IOS_CHROME_BROWSER_WEB_MODEL_JAVA_SCRIPT_CONSOLE_JAVA_SCRIPT_CONSOLE_FEATURE_DELEGATE_H_

struct JavaScriptConsoleMessage;

namespace web {
class WebFrame;
class WebState;
}  // namespace web

class JavaScriptConsoleFeatureDelegate {
 public:
  // Called when a JavaScript message has been logged.
  virtual void DidReceiveConsoleMessage(
      web::WebState* web_state,
      web::WebFrame* sender_frame,
      const JavaScriptConsoleMessage& message) = 0;

  JavaScriptConsoleFeatureDelegate() = default;
  virtual ~JavaScriptConsoleFeatureDelegate() = default;
  JavaScriptConsoleFeatureDelegate(const JavaScriptConsoleFeatureDelegate&) =
      delete;
  JavaScriptConsoleFeatureDelegate& operator=(
      const JavaScriptConsoleFeatureDelegate&) = delete;
};

#endif  // IOS_CHROME_BROWSER_WEB_MODEL_JAVA_SCRIPT_CONSOLE_JAVA_SCRIPT_CONSOLE_FEATURE_DELEGATE_H_
