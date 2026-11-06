// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OutputConfigurationChange implementation
// summary: Implements the OutputConfigurationChange class, defining default move and destructor behavior for output configuration change records.
// ---

#include "components/exo/wayland/output_configuration_change.h"

namespace exo::wayland {

OutputConfigurationChange::OutputConfigurationChange() = default;

OutputConfigurationChange::OutputConfigurationChange(
    OutputConfigurationChange&& other) = default;

OutputConfigurationChange& OutputConfigurationChange::operator=(
    OutputConfigurationChange&& other) = default;

OutputConfigurationChange::~OutputConfigurationChange() = default;

}  // namespace exo::wayland
