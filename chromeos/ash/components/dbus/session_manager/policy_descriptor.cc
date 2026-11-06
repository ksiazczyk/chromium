// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Policy descriptor helper implementation
// summary: Implements MakePolicyDescriptor, which builds a PolicyDescriptor proto from a given account type, policy domain and account id.
// ---

#include "chromeos/ash/components/dbus/session_manager/policy_descriptor.h"

namespace ash {

// Creates a PolicyDescriptor object to store/retrieve policy for the given
// account type, domain and account id.
login_manager::PolicyDescriptor MakePolicyDescriptor(
    login_manager::PolicyAccountType account_type,
    login_manager::PolicyDomain domain,
    const std::string& account_id) {
  login_manager::PolicyDescriptor descriptor;
  descriptor.set_account_type(account_type);
  descriptor.set_account_id(account_id);
  descriptor.set_domain(domain);
  return descriptor;
}

}  // namespace ash
