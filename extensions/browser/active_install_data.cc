// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ActiveInstallData implementation
// summary: Implements the ActiveInstallData constructor that records the extension ID of an in-progress extension install.
// ---

#include "extensions/browser/active_install_data.h"

#include "extensions/buildflags/buildflags.h"
#include "extensions/common/extension_id.h"

static_assert(BUILDFLAG(ENABLE_EXTENSIONS_CORE));

namespace extensions {

ActiveInstallData::ActiveInstallData(const ExtensionId& extension_id)
    : extension_id(extension_id) {}

}  // namespace extensions
