// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ExtensionEnableFlowDelegate interface
// summary: Defines the delegate interface notified when the extension enable flow finishes successfully or is aborted.
// ---

#ifndef CHROME_BROWSER_UI_EXTENSIONS_EXTENSION_ENABLE_FLOW_DELEGATE_H_
#define CHROME_BROWSER_UI_EXTENSIONS_EXTENSION_ENABLE_FLOW_DELEGATE_H_

class ExtensionEnableFlowDelegate {
 public:
  // Invoked when |flow| is finished successfully.
  virtual void ExtensionEnableFlowFinished() = 0;

  // Invoked when |flow| is aborted.
  virtual void ExtensionEnableFlowAborted(bool user_initiated) = 0;

 protected:
  virtual ~ExtensionEnableFlowDelegate() = default;
};

#endif  // CHROME_BROWSER_UI_EXTENSIONS_EXTENSION_ENABLE_FLOW_DELEGATE_H_
