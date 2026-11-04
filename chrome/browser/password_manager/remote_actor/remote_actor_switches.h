// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remote actor command-line switch declarations
// summary: Declares command-line switches that override the default endpoint URLs for the Passbox credential store service and the Agentic Permission Service.
// ---

#ifndef CHROME_BROWSER_PASSWORD_MANAGER_REMOTE_ACTOR_REMOTE_ACTOR_SWITCHES_H_
#define CHROME_BROWSER_PASSWORD_MANAGER_REMOTE_ACTOR_REMOTE_ACTOR_SWITCHES_H_

namespace switches {

// Overrides the default endpoint URL for the Passbox credential store service.
extern const char kPassboxEndpoint[];

// Overrides the default endpoint URL for the Agentic Permission Service (APS).
extern const char kAgentPermissionServiceEndpoint[];

}  // namespace switches

#endif  // CHROME_BROWSER_PASSWORD_MANAGER_REMOTE_ACTOR_REMOTE_ACTOR_SWITCHES_H_
