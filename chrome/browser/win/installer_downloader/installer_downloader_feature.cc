// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Installer downloader feature flag definitions
// summary: Defines the reengagement feature flag with parameters for maximum cycle count and cooldown days.
// ---

#include "chrome/browser/win/installer_downloader/installer_downloader_feature.h"

#include "base/feature_list.h"

namespace installer_downloader {

BASE_FEATURE(kInstallerDownloaderReengagement,
             base::FEATURE_ENABLED_BY_DEFAULT);

BASE_FEATURE_PARAM(int, kMaxCycleCount, &kInstallerDownloaderReengagement, 3);

BASE_FEATURE_PARAM(int,
                   kReengagementCooldownDays,
                   &kInstallerDownloaderReengagement,
                   60);

}  // namespace installer_downloader

