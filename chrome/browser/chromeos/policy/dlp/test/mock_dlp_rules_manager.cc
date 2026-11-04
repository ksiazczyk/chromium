// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock DLP rules manager implementation
// summary: Implements the constructor and destructor of the gmock mock DLP rules manager used in DLP policy tests.
// ---

#include "chrome/browser/chromeos/policy/dlp/test/mock_dlp_rules_manager.h"

namespace policy {

MockDlpRulesManager::MockDlpRulesManager(Profile* profile)
    : DlpRulesManager(profile) {}

MockDlpRulesManager::~MockDlpRulesManager() = default;

}  // namespace policy
