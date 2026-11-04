// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LockImpl Windows implementation
// summary: Implements LockImpl on Windows using exclusive SRW locks, timing contended acquisitions through the lock metrics recorder.
// ---

#include "base/synchronization/lock_impl.h"

#include <windows.h>

#include "base/synchronization/lock_metrics_recorder.h"

namespace base {
namespace internal {

LockImpl::LockImpl() : native_handle_(SRWLOCK_INIT) {}

LockImpl::~LockImpl() = default;

void LockImpl::LockInternal(const LockMetricTagList& tags) {
  LockMetricsRecorder::ScopedLockAcquisitionTimer timer(tags);
  ::AcquireSRWLockExclusive(reinterpret_cast<PSRWLOCK>(&native_handle_));
}

}  // namespace internal
}  // namespace base
