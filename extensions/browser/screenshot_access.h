// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Screenshot access error enum
// summary: Defines the ScreenshotAccessError enum listing reasons screenshot access can be blocked, such as disabled by preferences or by DLP.
// ---

#ifndef EXTENSIONS_BROWSER_SCREENSHOT_ACCESS_H_
#define EXTENSIONS_BROWSER_SCREENSHOT_ACCESS_H_

namespace extensions {

enum class ScreenshotAccessError {
  kDisabledByPreferences,
  kDisabledByDlp,
};

}  // namespace extensions

#endif  // EXTENSIONS_BROWSER_SCREENSHOT_ACCESS_H_
