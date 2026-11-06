// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Implementation of the Isolated Mode settings service
// summary: Computes and caches whether Isolated Mode replaces Incognito and whether Milestone 2 is enabled, based on prefs, feature flags, channel, and command line.
// ---

#include "components/enterprise/isolated_mode/isolated_mode_settings_service.h"

#include "base/command_line.h"
#include "base/feature_list.h"
#include "components/enterprise/isolated_mode/isolated_mode_features.h"
#include "components/enterprise/isolated_mode/prefs.h"
#include "components/prefs/pref_service.h"
#include "components/version_info/channel.h"

namespace enterprise_isolated_mode {

namespace {

bool IsCommandLineSwitchSupported(version_info::Channel channel) {
  return channel != version_info::Channel::STABLE &&
         channel != version_info::Channel::BETA;
}

bool ComputeReplacesIncognito(const PrefService* prefs,
                              version_info::Channel channel) {
  if (IsCommandLineSwitchSupported(channel) &&
      base::CommandLine::ForCurrentProcess()->HasSwitch(
          switches::kForceEnterpriseIsolatedModeReplacesIncognito)) {
    return true;
  }

  if (!prefs || !base::FeatureList::IsEnabled(kEnableEnterpriseIsolatedMode)) {
    return false;
  }

  auto setting = static_cast<IsolatedModeSetting>(
      prefs->GetInteger(kEnterpriseIsolatedModeSettings));
  return setting == IsolatedModeSetting::kEnabled;
}

bool ComputeMilestone2Enabled() {
  return base::FeatureList::IsEnabled(kEnterpriseIsolatedModeMilestone2);
}

}  // namespace

IsolatedModeSettingsService::IsolatedModeSettingsService(
    PrefService* prefs,
    version_info::Channel channel)
    // Evaluated exactly once at service creation, natively tying the cached
    // evaluation to the Profile lifecycle and locking in the channel state.
    : replaces_incognito_(ComputeReplacesIncognito(prefs, channel)),
      milestone2_enabled_(ComputeMilestone2Enabled()) {}

}  // namespace enterprise_isolated_mode
