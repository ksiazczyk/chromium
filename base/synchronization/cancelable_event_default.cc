// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CancelableEvent default platform implementation
// summary: Fallback CancelableEvent implementation that delegates Signal and TimedWait to WaitableEvent, with Cancel always failing.
// ---

#include "base/notreached.h"
#include "base/synchronization/cancelable_event.h"
#include "base/synchronization/waitable_event.h"
#include "build/build_config.h"

namespace base {

CancelableEvent::CancelableEvent() = default;

CancelableEvent::~CancelableEvent() = default;

void CancelableEvent::SignalImpl() {
  native_handle_.Signal();
}

bool CancelableEvent::CancelImpl() {
  return false;
}

bool CancelableEvent::TimedWaitImpl(TimeDelta timeout) {
  return native_handle_.TimedWait(timeout);
}

}  // namespace base
