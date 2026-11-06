// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: V8 Crashpad support for Windows
// summary: Declares the v8_crashpad_support::SetUp() function that hooks up V8 to Crashpad on Windows.
// ---

#ifndef CONTENT_SHELL_COMMON_V8_CRASHPAD_SUPPORT_WIN_H_
#define CONTENT_SHELL_COMMON_V8_CRASHPAD_SUPPORT_WIN_H_

namespace v8_crashpad_support {

// Hook up V8 to crashpad.
void SetUp();

}  // namespace v8_crashpad_support

#endif  // CONTENT_SHELL_COMMON_V8_CRASHPAD_SUPPORT_WIN_H_
