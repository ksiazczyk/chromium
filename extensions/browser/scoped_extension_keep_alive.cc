// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScopedBrowserContextKeepAlive destructor definition
// summary: Defines the destructor for the ScopedBrowserContextKeepAlive base class used by embedders to keep browser contexts alive.
// ---

#include "extensions/browser/scoped_extension_keep_alive.h"

namespace extensions {

ScopedBrowserContextKeepAlive::~ScopedBrowserContextKeepAlive() = default;

}  // namespace extensions
