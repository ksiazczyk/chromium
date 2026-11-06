// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake NavigationPolicyProvider for tests
// summary: Provides a test double NavigationPolicyProvider that records evaluated navigations and returns configurable proceed or abort decisions.
// ---

#include "fuchsia_web/webengine/browser/fake_navigation_policy_provider.h"

#include "base/notimplemented.h"
#include "testing/gtest/include/gtest/gtest.h"

FakeNavigationPolicyProvider::FakeNavigationPolicyProvider() = default;

FakeNavigationPolicyProvider::~FakeNavigationPolicyProvider() = default;

void FakeNavigationPolicyProvider::EvaluateRequestedNavigation(
    fuchsia::web::RequestedNavigation requested_navigation,
    EvaluateRequestedNavigationCallback callback) {
  fuchsia::web::NavigationDecision decision;
  if (should_abort_navigation_) {
    callback(decision.WithAbort(fuchsia::web::NoArgumentsAction()));
  } else {
    callback(decision.WithProceed(fuchsia::web::NoArgumentsAction()));
  }

  requested_navigation_ = std::move(requested_navigation);
  num_evaluated_navigations_++;
}

void FakeNavigationPolicyProvider::NotImplemented_(const std::string& name) {
  NOTIMPLEMENTED() << name;
}
