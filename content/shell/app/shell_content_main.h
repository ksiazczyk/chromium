// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Content Shell macOS main entry declaration
// summary: Header declaring the exported ContentMain entry point used by Content Shell on macOS builds.
// ---

#ifndef CONTENT_SHELL_APP_SHELL_CONTENT_MAIN_H_
#define CONTENT_SHELL_APP_SHELL_CONTENT_MAIN_H_

#include "build/build_config.h"

#if BUILDFLAG(IS_MAC)
extern "C" {
__attribute__((visibility("default")))
int ContentMain(int argc,
                const char** argv);
}  // extern "C"
#endif  // BUILDFLAG(IS_MAC)

#endif  // CONTENT_SHELL_APP_SHELL_CONTENT_MAIN_H_
