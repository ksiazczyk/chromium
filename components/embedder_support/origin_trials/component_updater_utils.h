// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for origin trials component updater utilities
// summary: Declares functions that read origin trial configuration from a component updater manifest into local state and set up command line switches and settings storage at startup.
// ---

#ifndef COMPONENTS_EMBEDDER_SUPPORT_ORIGIN_TRIALS_COMPONENT_UPDATER_UTILS_H_
#define COMPONENTS_EMBEDDER_SUPPORT_ORIGIN_TRIALS_COMPONENT_UPDATER_UTILS_H_

#include "base/values.h"

class PrefService;

namespace embedder_support {

class OriginTrialsSettingsStorage;

// Read the configuration from `manifest` and set values in `local_state`.
// If an individual configuration value is missing, reset values in
// `local_state`.
void ReadOriginTrialsConfigAndPopulateLocalState(PrefService* local_state,
                                                 base::DictValue manifest);

// Append the stored Origin Trial configuration overrides to the current process
// command line, if the command line does not already contain these values. This
// should be done early during browser startup.
void SetupOriginTrialsCommandLineAndSettings(
    PrefService* local_state,
    OriginTrialsSettingsStorage* settings_storage);

}  // namespace embedder_support

#endif  // COMPONENTS_EMBEDDER_SUPPORT_ORIGIN_TRIALS_COMPONENT_UPDATER_UTILS_H_
