// Copyright 2009 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scrollbar size implementation
// summary: Returns the scrollbar thickness in pixels, using Windows system metrics or a default value of 15 on other platforms.
// ---

#include "ui/gfx/scrollbar_size.h"

#include "base/compiler_specific.h"
#include "build/build_config.h"

#if BUILDFLAG(IS_WIN)
#include <windows.h>
#endif

namespace gfx {

int scrollbar_size() {
#if BUILDFLAG(IS_WIN)
  return GetSystemMetrics(SM_CXVSCROLL);
#else
  return 15;
#endif
}

}  // namespace gfx
