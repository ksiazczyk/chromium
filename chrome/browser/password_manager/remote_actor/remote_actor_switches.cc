// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remote actor command-line switch definitions
// summary: Defines the command-line switch name constants used to override the Passbox credential store and Agent Permission Service endpoint URLs.
// ---

#include "chrome/browser/password_manager/remote_actor/remote_actor_switches.h"

namespace switches {

const char kPassboxEndpoint[] = "passbox-endpoint";
const char kAgentPermissionServiceEndpoint[] =
    "agent-permission-service-endpoint";

}  // namespace switches
