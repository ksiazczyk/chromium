// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TracingAgent base implementation
// summary: Implements default behavior of the TracingAgent interface, including clock sync support and marker recording.
// ---

#include "base/trace_event/tracing_agent.h"

namespace base::trace_event {

TracingAgent::~TracingAgent() = default;

bool TracingAgent::SupportsExplicitClockSync() {
  return false;
}

void TracingAgent::RecordClockSyncMarker(
    const std::string& sync_id,
    RecordClockSyncMarkerCallback callback) {
  DCHECK(SupportsExplicitClockSync());
}

}  // namespace base::trace_event
