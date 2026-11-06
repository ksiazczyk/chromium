// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DisplaySettingsManager implementation
// summary: Implements the default constructors and destructor of the DisplaySettingsManager ColorTemperatureConfig struct.
// ---

#include "chromecast/ui/display_settings_manager.h"

namespace chromecast {

DisplaySettingsManager::ColorTemperatureConfig::ColorTemperatureConfig() =
    default;
DisplaySettingsManager::ColorTemperatureConfig::ColorTemperatureConfig(
    const ColorTemperatureConfig& other) = default;
DisplaySettingsManager::ColorTemperatureConfig::~ColorTemperatureConfig() =
    default;

}  // namespace chromecast
