// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remote commands invalidation constants
// summary: Defines the GCP project number used for remote commands invalidations, reusing the critical invalidations project number.
// ---

#ifndef COMPONENTS_POLICY_CORE_COMMON_REMOTE_COMMANDS_REMOTE_COMMANDS_CONSTANTS_H_
#define COMPONENTS_POLICY_CORE_COMMON_REMOTE_COMMANDS_REMOTE_COMMANDS_CONSTANTS_H_

#include <stdint.h>

#include "components/invalidation/invalidation_constants.h"

namespace policy {

// GCP number to be used for remote commands invalidations. Remote commands
// are considered critical to receive invalidation.
inline constexpr int64_t kRemoteCommandsInvalidationsProjectNumber =
    invalidation::kCriticalInvalidationsProjectNumber;

}  // namespace policy

#endif  // COMPONENTS_POLICY_CORE_COMMON_REMOTE_COMMANDS_REMOTE_COMMANDS_CONSTANTS_H_
