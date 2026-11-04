// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SessionLifecycle stream output operator
// summary: Implements the ostream operator that prints human-readable names for the session lifecycle states.
// ---

#include "chrome/browser/ttc/core/states.h"

#include <ostream>

#include "base/notreached.h"

namespace ttc {

std::ostream& operator<<(std::ostream& os, SessionLifecycle lifecycle) {
  switch (lifecycle) {
    case SessionLifecycle::kInitializing:
      return os << "Initializing";
    case SessionLifecycle::kLive:
      return os << "Live";
    case SessionLifecycle::kFinished:
      return os << "Finished";
  }
  NOTREACHED();
}

}  // namespace ttc
