// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Policy service stub
// summary: Provides a no-op PolicyService stub that returns empty policies and immediately completes refresh callbacks.
// ---

#include "components/policy/core/common/policy_service_stub.h"

#include "components/policy/core/common/policy_types.h"

namespace policy {

PolicyServiceStub::PolicyServiceStub() = default;
PolicyServiceStub::~PolicyServiceStub() = default;

void PolicyServiceStub::AddObserver(PolicyDomain domain, Observer* observer) {}

void PolicyServiceStub::RemoveObserver(PolicyDomain domain,
                                       Observer* observer) {}

void PolicyServiceStub::AddProviderUpdateObserver(ProviderUpdateObserver*) {}
void PolicyServiceStub::RemoveProviderUpdateObserver(ProviderUpdateObserver*) {}

bool PolicyServiceStub::HasProvider(ConfigurationPolicyProvider*) const {
  return true;
}

bool PolicyServiceStub::IsFirstPolicyLoadComplete(PolicyDomain) const {
  return true;
}

const PolicyMap& PolicyServiceStub::GetPolicies(
    const PolicyNamespace& ns) const {
  return kEmpty_;
}

bool PolicyServiceStub::IsInitializationComplete(PolicyDomain domain) const {
  return true;
}

void PolicyServiceStub::RefreshPolicies(base::OnceClosure callback,
                                        PolicyFetchReason reason) {
  if (!callback.is_null()) {
    std::move(callback).Run();
  }
}

}  // namespace policy
