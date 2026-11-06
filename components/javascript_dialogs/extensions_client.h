// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Extensions client interface for JavaScript dialogs
// summary: Client interface for accessing and controlling extensions or apps that opened a JavaScript dialog, notifying them when dialogs open and close.
// ---

#ifndef COMPONENTS_JAVASCRIPT_DIALOGS_EXTENSIONS_CLIENT_H_
#define COMPONENTS_JAVASCRIPT_DIALOGS_EXTENSIONS_CLIENT_H_

namespace content {
class WebContents;
}

namespace javascript_dialogs {

// A client interface to access and control extensions/apps
// that opened a JavaScript dialog.
class ExtensionsClient {
 public:
  virtual ~ExtensionsClient() = default;

  // Called when the extension associated with |web_contents| opened
  // a dialog.
  virtual void OnDialogOpened(content::WebContents* web_contents) = 0;

  // Called when a dialog created by the extension associated with
  // |web_contents| is closed.
  virtual void OnDialogClosed(content::WebContents* web_contents) = 0;
};

}  // namespace javascript_dialogs

#endif  // COMPONENTS_JAVASCRIPT_DIALOGS_EXTENSIONS_CLIENT_H_
