// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock password credential filler implementation
// summary: Provides constructor, destructor and weak pointer support for the mock PasswordCredentialFiller used in tests.
// ---

#include "components/password_manager/core/browser/mock_password_credential_filler.h"

namespace password_manager {

MockPasswordCredentialFiller::MockPasswordCredentialFiller() = default;
MockPasswordCredentialFiller::~MockPasswordCredentialFiller() = default;

base::WeakPtr<PasswordCredentialFiller>
MockPasswordCredentialFiller::AsWeakPtr() {
  return weak_ptr_factory_.GetWeakPtr();
}

}  // namespace password_manager
