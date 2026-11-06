// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: InstallableParams implementation
// summary: Implements the constructors and destructor of the InstallableParams struct that configures installability checks.
// ---

#include "components/webapps/browser/installable/installable_params.h"

namespace webapps {

InstallableParams::InstallableParams() = default;

InstallableParams::~InstallableParams() = default;

InstallableParams::InstallableParams(const InstallableParams& other) = default;

}  // namespace webapps
