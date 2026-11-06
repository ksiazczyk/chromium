// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: One-time token log handler declaration
// summary: Declares a factory returning a log sink handler that routes one-time token messages to the autofill LogRouter, or a null callback when no router exists.
// ---

#ifndef COMPONENTS_AUTOFILL_CORE_BROWSER_INTEGRATORS_ONE_TIME_TOKENS_ONE_TIME_TOKEN_LOG_HANDLER_H_
#define COMPONENTS_AUTOFILL_CORE_BROWSER_INTEGRATORS_ONE_TIME_TOKENS_ONE_TIME_TOKEN_LOG_HANDLER_H_

#include "components/one_time_tokens/core/browser/one_time_token_log_sink.h"

namespace autofill {

class LogRouter;

// Returns a `OneTimeTokenLogSink::LogHandler` that forwards one-time token log
// messages to `log_router` under `LoggingScope::kOneTimeTokens`. If
// `log_router` is null, returns a null callback.
one_time_tokens::OneTimeTokenLogSink::LogHandler CreateOneTimeTokenLogHandler(
    LogRouter* log_router);

}  // namespace autofill

#endif  // COMPONENTS_AUTOFILL_CORE_BROWSER_INTEGRATORS_ONE_TIME_TOKENS_ONE_TIME_TOKEN_LOG_HANDLER_H_
