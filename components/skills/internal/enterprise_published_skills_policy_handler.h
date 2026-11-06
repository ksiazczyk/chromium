// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Enterprise published skills policy handler declaration
// summary: Declares the policy handler class that validates enterprise skill entries and enforces a limit of ten skills.
// ---

#ifndef COMPONENTS_SKILLS_INTERNAL_ENTERPRISE_PUBLISHED_SKILLS_POLICY_HANDLER_H_
#define COMPONENTS_SKILLS_INTERNAL_ENTERPRISE_PUBLISHED_SKILLS_POLICY_HANDLER_H_

#include "components/policy/core/browser/configuration_policy_handler.h"

namespace skills {

class EnterprisePublishedSkillsPolicyHandler
    : public policy::SimpleSchemaValidatingPolicyHandler {
 public:
  static constexpr size_t kMaxSkillsLimit = 10;

  explicit EnterprisePublishedSkillsPolicyHandler(policy::Schema schema);
  EnterprisePublishedSkillsPolicyHandler(
      const EnterprisePublishedSkillsPolicyHandler&) = delete;
  EnterprisePublishedSkillsPolicyHandler& operator=(
      const EnterprisePublishedSkillsPolicyHandler&) = delete;
  ~EnterprisePublishedSkillsPolicyHandler() override;

  // ConfigurationPolicyHandler:
  bool CheckPolicySettings(const policy::PolicyMap& policies,
                           policy::PolicyErrorMap* errors) override;
  void ApplyPolicySettings(const policy::PolicyMap& policies,
                           PrefValueMap* prefs) override;

 private:
  base::ListValue ValidateAndFilterSkillsList(
      const base::ListValue& skills_list,
      policy::PolicyErrorMap* errors);
};

}  // namespace skills
#endif  // COMPONENTS_SKILLS_INTERNAL_ENTERPRISE_PUBLISHED_SKILLS_POLICY_HANDLER_H_
