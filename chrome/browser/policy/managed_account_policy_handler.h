// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Managed account restrictions policy handler header
// summary: Declares a schema-validating policy handler that maps ManagedAccountsSigninRestriction to a pref and sets its machine or account scope.
// ---

#ifndef CHROME_BROWSER_POLICY_MANAGED_ACCOUNT_POLICY_HANDLER_H_
#define CHROME_BROWSER_POLICY_MANAGED_ACCOUNT_POLICY_HANDLER_H_

#include "components/policy/core/browser/configuration_policy_handler.h"

// Maps policy to pref like SimpleSchemaValidatingPolicyHandler wand sets the
// scope for the policy, either machine or account.
class ManagedAccountRestrictionsPolicyHandler
    : public policy::SimpleSchemaValidatingPolicyHandler {
 public:
  explicit ManagedAccountRestrictionsPolicyHandler(policy::Schema schema);
  ~ManagedAccountRestrictionsPolicyHandler() override;

  // ConfigurationPolicyHandler:
  void ApplyPolicySettings(const policy::PolicyMap& policies,
                           PrefValueMap* prefs) override;
};

#endif  // CHROME_BROWSER_POLICY_MANAGED_ACCOUNT_POLICY_HANDLER_H_
