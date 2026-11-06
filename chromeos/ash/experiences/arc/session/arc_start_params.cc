// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: StartParams definitions
// summary: Defines the default constructor, destructor, and move operations for the StartParams struct used to configure ARC instance start requests.
// ---

#include "chromeos/ash/experiences/arc/session/arc_start_params.h"

namespace arc {

StartParams::StartParams() = default;
StartParams::~StartParams() = default;
StartParams::StartParams(StartParams&& other) = default;
StartParams& StartParams::operator=(StartParams&& other) = default;

}  // namespace arc
