// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake CRX installer with no-op installation
// summary: Stub CrxInstaller whose InstallCrxFile does nothing so test code can fake installation completion by invoking installer callbacks directly.
// ---

#include "chrome/browser/extensions/fake_crx_installer.h"
#include "content/public/browser/browser_task_traits.h"
#include "content/public/browser/browser_thread.h"

namespace extensions {

FakeCrxInstaller::FakeCrxInstaller(content::BrowserContext* context)
    : CrxInstaller(context, nullptr, nullptr) {}

FakeCrxInstaller::~FakeCrxInstaller() = default;

void FakeCrxInstaller::InstallCrxFile(const CRXFileInfo& info) {}

}  // namespace extensions
