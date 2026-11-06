// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Configuration policy handler list factory header
// summary: Declares BuildPolicyHandlerList, which builds the iOS configuration policy handler list with optional support for future policies.
// ---

#ifndef IOS_CHROME_BROWSER_POLICY_MODEL_CONFIGURATION_POLICY_HANDLER_LIST_FACTORY_H_
#define IOS_CHROME_BROWSER_POLICY_MODEL_CONFIGURATION_POLICY_HANDLER_LIST_FACTORY_H_

#include <memory>

namespace policy {
class ConfigurationPolicyHandlerList;
class Schema;
}  // namespace policy

// Builds a policy handler list.
// All un-released policies will be ignored by default unless
// `are_future_policies_allowed_by_default` is True.
std::unique_ptr<policy::ConfigurationPolicyHandlerList> BuildPolicyHandlerList(
    bool are_future_policies_allowed_by_default,
    const policy::Schema& chrome_schema);

#endif  // IOS_CHROME_BROWSER_POLICY_MODEL_CONFIGURATION_POLICY_HANDLER_LIST_FACTORY_H_
