// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shim header for including wbemidl.h
// summary: Header that Chromium code should include instead of wbemidl.h so the Windows base shim is pulled in first to keep include ordering correct.
// ---

#ifndef BASE_WIN_WBEMIDL_SHIM_H_
#define BASE_WIN_WBEMIDL_SHIM_H_

// Any Chromium headers which want to `#include <wbemidl.h>` should instead
// #include this header.

// <wbemidl.h> #includes <winbase.h>, and so needs to shim it; see comments in
// winbase_shim.h.
// clang-format off
#include "base/win/winbase_shim.h"
#include <wbemidl.h>
// clang-format on

#endif  // BASE_WIN_WBEMIDL_SHIM_H_
