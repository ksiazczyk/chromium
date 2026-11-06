// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Request priority to string conversion
// summary: Implements RequestPriorityToString, mapping request priority enum values to their string names for logging and metrics.
// ---

#include "net/base/request_priority.h"

#include "base/notreached.h"

namespace net {

// LINT.IfChange(RequestPriorityToString)
const char* RequestPriorityToString(RequestPriority priority) {
  switch (priority) {
    case THROTTLED:
      return "THROTTLED";
    case IDLE:
      return "IDLE";
    case LOWEST:
      return "LOWEST";
    case LOW:
      return "LOW";
    case MEDIUM:
      return "MEDIUM";
    case HIGHEST:
      return "HIGHEST";
  }
  NOTREACHED();
}
// LINT.ThenChange(//tools/metrics/histograms/metadata/network/histograms.xml:RequestPriority)

}  // namespace net
