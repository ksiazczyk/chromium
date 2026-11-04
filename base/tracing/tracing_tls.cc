// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tracing thread-local flag implementation
// summary: Implements GetThreadIsInTraceEvent, which returns a thread-local boolean flag tracking whether the thread is executing trace event code.
// ---

#include "base/tracing/tracing_tls.h"

namespace base::tracing {

// static
bool* GetThreadIsInTraceEvent() {
  thread_local bool thread_is_in_trace_event = false;
  return &thread_is_in_trace_event;
}

}  // namespace base::tracing
