// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Extension install decision proto types implementation
// summary: Defines the constructors and destructor for the ExtensionInstallDecision struct that wraps an extension install policy action and its reasons.
// ---

#include "components/policy/core/common/cloud/cloud_policy_client_proto_types.h"

#include <set>
#include <utility>

namespace policy {

ExtensionInstallDecision::ExtensionInstallDecision() = default;

ExtensionInstallDecision::ExtensionInstallDecision(
    enterprise_management::ExtensionInstallPolicy::Action action,
    std::set<enterprise_management::ExtensionInstallPolicy::Reason> reasons)
    : action(action), reasons(std::move(reasons)) {}

ExtensionInstallDecision::ExtensionInstallDecision(
    const ExtensionInstallDecision&) = default;

ExtensionInstallDecision::ExtensionInstallDecision(ExtensionInstallDecision&&) =
    default;

ExtensionInstallDecision::~ExtensionInstallDecision() = default;

}  // namespace policy
