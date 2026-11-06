// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for headless command line switch handling
// summary: Declares HandleCommandLineSwitches, which applies command line switches to HeadlessBrowser options.
// ---

#ifndef HEADLESS_LIB_BROWSER_COMMAND_LINE_HANDLER_H_
#define HEADLESS_LIB_BROWSER_COMMAND_LINE_HANDLER_H_

#include "base/command_line.h"
#include "headless/public/headless_browser.h"

namespace headless {

bool HandleCommandLineSwitches(base::CommandLine& command_line,
                               HeadlessBrowser::Options& options);

}  // namespace headless

#endif  // HEADLESS_LIB_BROWSER_COMMAND_LINE_HANDLER_H_
