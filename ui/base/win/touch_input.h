// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Touch input wrapper header
// summary: Declares GetTouchInputInfoWrapper, a wrapper for GetTouchInputInfo that returns FALSE on Windows versions before 7.
// ---

#ifndef UI_BASE_WIN_TOUCH_INPUT_H_
#define UI_BASE_WIN_TOUCH_INPUT_H_

#include <windows.h>

#include "base/component_export.h"

namespace ui {

// Wrapper for GetTouchInputInfo, which is not defined before Win7. For
// earlier OS's, this function returns FALSE.
COMPONENT_EXPORT(UI_BASE)
BOOL GetTouchInputInfoWrapper(HTOUCHINPUT handle,
                              UINT count,
                              PTOUCHINPUT pointer,
                              int size);

}  // namespace ui

#endif  // UI_BASE_WIN_TOUCH_INPUT_H_
