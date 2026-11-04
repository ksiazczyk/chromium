// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Thread-safe observer list internals
// summary: Implements thread-local tracking of the current notification for ObserverListThreadSafe, including an MSAN false-positive workaround.
// ---

#include "base/observer_list_threadsafe.h"

#include "base/compiler_specific.h"

namespace base::internal {

constinit thread_local const ObserverListThreadSafeBase::NotificationDataBase*
    current_notification = nullptr;

// static
const ObserverListThreadSafeBase::NotificationDataBase*&
ObserverListThreadSafeBase::GetCurrentNotification() {
  // Workaround false-positive MSAN use-of-uninitialized-value on
  // thread_local storage for loaded libraries:
  // https://github.com/google/sanitizers/issues/1265
  MSAN_UNPOISON(
      &current_notification,
      sizeof(const ObserverListThreadSafeBase::NotificationDataBase*));

  return current_notification;
}

}  // namespace base::internal
