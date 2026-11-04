// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android extension error UI header
// summary: Declares the Android subclass of ExtensionErrorUI that stubs out bubble view, extensions page, and close behavior.
// ---

#ifndef CHROME_BROWSER_EXTENSIONS_EXTENSION_ERROR_UI_ANDROID_H_
#define CHROME_BROWSER_EXTENSIONS_EXTENSION_ERROR_UI_ANDROID_H_

#include "chrome/browser/extensions/extension_error_ui.h"

namespace extensions {

class ExtensionErrorUIAndroid : public ExtensionErrorUI {
 public:
  explicit ExtensionErrorUIAndroid(ExtensionErrorUI::Delegate* delegate);

  ExtensionErrorUIAndroid(const ExtensionErrorUIAndroid&) = delete;
  ExtensionErrorUIAndroid& operator=(const ExtensionErrorUIAndroid&) = delete;

  ~ExtensionErrorUIAndroid() override;

  bool ShowErrorInBubbleView() override;
  void ShowExtensions() override;
  void Close() override;

 private:
};

}  // namespace extensions

#endif  // CHROME_BROWSER_EXTENSIONS_EXTENSION_ERROR_UI_ANDROID_H_
