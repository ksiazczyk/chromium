// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock CRX installer implementation
// summary: Implements the MockCrxInstaller constructor and destructor used to track extension installations in tests.
// ---

#include "chrome/browser/extensions/mock_crx_installer.h"

#include "extensions/buildflags/buildflags.h"

static_assert(BUILDFLAG(ENABLE_EXTENSIONS_CORE));

namespace extensions {

MockCrxInstaller::MockCrxInstaller(content::BrowserContext* context)
    : CrxInstaller(context, nullptr, nullptr) {}

MockCrxInstaller::~MockCrxInstaller() = default;

}  // namespace extensions
