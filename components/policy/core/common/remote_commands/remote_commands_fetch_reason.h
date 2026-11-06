// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remote commands fetch reason enum
// summary: Defines the RemoteCommandsFetchReason enum listing why remote commands are fetched, such as startup, user request, result upload or invalidation.
// ---

#ifndef COMPONENTS_POLICY_CORE_COMMON_REMOTE_COMMANDS_REMOTE_COMMANDS_FETCH_REASON_H_
#define COMPONENTS_POLICY_CORE_COMMON_REMOTE_COMMANDS_REMOTE_COMMANDS_FETCH_REASON_H_

namespace policy {

enum class RemoteCommandsFetchReason {
  kTest,
  kStartup,
  kUploadExecutionResults,
  kUserRequest,
  kInvalidation,
};
}

#endif  // COMPONENTS_POLICY_CORE_COMMON_REMOTE_COMMANDS_REMOTE_COMMANDS_FETCH_REASON_H_
