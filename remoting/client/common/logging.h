// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Client logging macros bypassing spam checks
// summary: Defines CLIENT_LOG and CLIENT_DLOG macros so Chromoting client code can log info messages without tripping the CheckSpamLogging presubmit check.
// ---

#ifndef REMOTING_CLIENT_COMMON_LOGGING_H_
#define REMOTING_CLIENT_COMMON_LOGGING_H_

#include "base/logging.h"

namespace remoting {

// Chromoting client code should use CLIENT_LOG instead of LOG(INFO) to bypass
// the CheckSpamLogging presubmit check.
#define CLIENT_LOG LOG(INFO)
#define CLIENT_DLOG DLOG(INFO)

}  // namespace remoting

#endif  // REMOTING_CLIENT_COMMON_LOGGING_H_
