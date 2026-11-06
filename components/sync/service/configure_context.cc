// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Configure context implementation
// summary: Defines the default and copy constructors plus the destructor for the syncer ConfigureContext class used during sync configuration.
// ---

#include "components/sync/service/configure_context.h"

namespace syncer {

ConfigureContext::ConfigureContext() = default;

ConfigureContext::ConfigureContext(const ConfigureContext&) = default;

ConfigureContext::~ConfigureContext() = default;

}  // namespace syncer
