// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock PolicyService implementation
// summary: Implements gmock mock classes for PolicyService and its observers, providing test doubles for policy service interactions.
// ---

#include "components/policy/core/common/mock_policy_service.h"

namespace policy {

MockPolicyServiceObserver::MockPolicyServiceObserver() = default;

MockPolicyServiceObserver::~MockPolicyServiceObserver() = default;

MockPolicyServiceProviderUpdateObserver::
    MockPolicyServiceProviderUpdateObserver() = default;

MockPolicyServiceProviderUpdateObserver::
    ~MockPolicyServiceProviderUpdateObserver() = default;

MockPolicyService::MockPolicyService() = default;

MockPolicyService::~MockPolicyService() = default;

}  // namespace policy
