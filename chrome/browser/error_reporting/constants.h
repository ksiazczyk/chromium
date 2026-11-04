// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: JavaScript stack key constant declaration
// summary: Declares the Chrome OS key constant for the JavaScript stack payload, matching the format expected by ChromeCollector::ParseCrashLog.
// ---

#ifndef CHROME_BROWSER_ERROR_REPORTING_CONSTANTS_H_
#define CHROME_BROWSER_ERROR_REPORTING_CONSTANTS_H_

#include "build/build_config.h"

#if BUILDFLAG(IS_CHROMEOS)
// The key we pass to crash_reporter to indicate this key/value pair is the
// JavaScript stack payload.
// The format of the key needs to match Chrome OS's
// ChromeCollector::ParseCrashLog and kDefaultJavaScriptStackName. The
// 'filename' within the key doesn't actually matter but must be present.
extern const char kJavaScriptStackKey[];
#endif  // BUILDFLAG(IS_CHROMEOS)

#endif  // CHROME_BROWSER_ERROR_REPORTING_CONSTANTS_H_
