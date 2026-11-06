// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FCM backoff policy header
// summary: Declares GetBackoffPolicy in the fcm namespace, which returns the backoff policy applied to all FCM/GCM network requests.
// ---

#ifndef COMPONENTS_FCM_BASE_FCM_BACKOFF_POLICY_H_
#define COMPONENTS_FCM_BASE_FCM_BACKOFF_POLICY_H_

#include "net/base/backoff_entry.h"

namespace fcm {

// Returns the backoff policy that applies to all FCM/GCM network requests.
const net::BackoffEntry::Policy& GetBackoffPolicy();

}  // namespace fcm

#endif  // COMPONENTS_FCM_BASE_FCM_BACKOFF_POLICY_H_
