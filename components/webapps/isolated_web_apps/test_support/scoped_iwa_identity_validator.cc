// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scoped IWA identity validator implementation
// summary: Installs the IWA identity validator as the global web_package identity validator for the object's lifetime.
// ---

#include "components/webapps/isolated_web_apps/test_support/scoped_iwa_identity_validator.h"

namespace web_app::test {

ScopedIwaIdentityValidator::ScopedIwaIdentityValidator()
    : auto_reset_(web_package::IdentityValidator::SetInstanceForTesting(this)) {}

ScopedIwaIdentityValidator::~ScopedIwaIdentityValidator() = default;

}  // namespace web_app::test
