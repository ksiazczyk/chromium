// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Extension logging constants header
// summary: Defines the minimum log severity at which extension errors are reported to the browser, kept separate from constants.h to limit logging includes.
// ---

#ifndef EXTENSIONS_COMMON_LOGGING_CONSTANTS_H_
#define EXTENSIONS_COMMON_LOGGING_CONSTANTS_H_

#include "base/logging.h"

// Separate from constants.h to avoid pulling base/logging.h into many files.

namespace extension_misc {

// The minimum severity of a log or error in order to report it to the browser.
inline constexpr logging::LogSeverity kMinimumSeverityToReportError =
    logging::LOGGING_WARNING;

}  // namespace extension_misc

#endif  // EXTENSIONS_COMMON_LOGGING_CONSTANTS_H_
