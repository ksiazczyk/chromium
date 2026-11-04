// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Policy value provider base class implementation
// summary: Implements the PolicyValueProvider base with observer management, change notification and default empty mojo value and name getters.
// ---

#include "chrome/browser/policy/value_provider/policy_value_provider.h"

#include <utility>

#include "base/observer_list.h"
#include "components/policy/resources/webui/mojom/policy.mojom.h"

namespace policy {

PolicyValueProvider::PolicyValueProvider() = default;

PolicyValueProvider::~PolicyValueProvider() = default;

void PolicyValueProvider::Refresh() {}

void PolicyValueProvider::NotifyValueChange() {
  for (auto& observer : observers_) {
    observer.OnPolicyValueChanged();
  }
}

void PolicyValueProvider::AddObserver(Observer* observer) {
  observers_.AddObserver(observer);
}

void PolicyValueProvider::RemoveObserver(Observer* observer) {
  observers_.RemoveObserver(observer);
}

base::flat_map<std::string, policy::mojom::PolicyGroupPtr>
PolicyValueProvider::GetValuesMojo() const {
  return {};
}

base::flat_map<std::string, policy::mojom::PolicyGroupNamesPtr>
PolicyValueProvider::GetNamesMojo() const {
  return {};
}

}  // namespace policy
