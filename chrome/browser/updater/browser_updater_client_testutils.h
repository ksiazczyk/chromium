// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test utility declarations for the updater client
// summary: Declares helpers to override the update service with fakes and to load app states in tests.
// ---

#ifndef CHROME_BROWSER_UPDATER_BROWSER_UPDATER_CLIENT_TESTUTILS_H_
#define CHROME_BROWSER_UPDATER_BROWSER_UPDATER_CLIENT_TESTUTILS_H_

#include <string>
#include <vector>

#include "base/functional/callback_forward.h"
#include "base/memory/scoped_refptr.h"
#include "chrome/updater/update_service.h"

namespace base {
class ScopedClosureRunner;
}

namespace updater {

base::ScopedClosureRunner OverrideService(
    UpdateService::Result result,
    const std::vector<UpdateService::AppState>& states);

base::RepeatingCallback<scoped_refptr<UpdateService>()> MakeFakeService(
    UpdateService::Result result,
    const std::vector<UpdateService::AppState>& states);

void LoadAppStates();

std::string GetAppId();
base::FilePath GetExpectedEcp();

}  // namespace updater

#endif  // CHROME_BROWSER_UPDATER_BROWSER_UPDATER_CLIENT_TESTUTILS_H_
