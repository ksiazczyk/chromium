// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SessionState string conversion
// summary: Implements ToString and stream output for the SessionState enum values used in dictation logging.
// ---

#include "chrome/browser/dictation/session_state.h"

#include <ostream>

namespace dictation {

const char* ToString(SessionState state) {
  switch (state) {
    case SessionState::kInactive:
      return "kInactive";
    case SessionState::kStreamInitializing:
      return "kStreamInitializing";
    case SessionState::kTranscribing:
      return "kTranscribing";
    case SessionState::kFinalizing:
      return "kFinalizing";
  }
}

std::ostream& operator<<(std::ostream& out, SessionState state) {
  return out << ToString(state);
}

}  // namespace dictation
