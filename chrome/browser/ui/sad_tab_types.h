// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sad tab kind enum
// summary: Defines the SadTabKind enum distinguishing crashed, out-of-memory, killed, and ChromeOS OOM-killer tab states.
// ---

#ifndef CHROME_BROWSER_UI_SAD_TAB_TYPES_H_
#define CHROME_BROWSER_UI_SAD_TAB_TYPES_H_

#include "build/build_config.h"

enum SadTabKind {
  SAD_TAB_KIND_CRASHED,  // Tab crashed.
#if BUILDFLAG(IS_CHROMEOS)
  SAD_TAB_KIND_KILLED_BY_OOM,  // Tab killed by oom killer.
#endif
  SAD_TAB_KIND_OOM,    // Tab ran out of memory.
  SAD_TAB_KIND_KILLED  // Tab killed.
};

#endif  // CHROME_BROWSER_UI_SAD_TAB_TYPES_H_
