// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Constants for auto-launch protocol policy keys
// summary: Defines the string constants naming the protocol and allowed origins keys used by the auto-launch protocols policy.
// ---

#include "chrome/browser/external_protocol/constants.h"

namespace policy::external_protocol {

const char kProtocolNameKey[] = "protocol";

const char kOriginListKey[] = "allowed_origins";

}  // namespace policy::external_protocol
