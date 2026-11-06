// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GCM incoming message TTL constant definition
// summary: Defines the GCM constant kIncomingMessageTTL as a seven-day time to live for incoming messages.
// ---

#include "google_apis/gcm/base/gcm_constants.h"

namespace gcm {

constexpr base::TimeDelta kIncomingMessageTTL = base::Days(7);

}  // namespace gcm
