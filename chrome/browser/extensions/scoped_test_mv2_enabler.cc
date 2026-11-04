// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scoped test MV2 enabler implementation
// summary: Implements ScopedTestMV2Enabler, which temporarily allows loading and enabling legacy Manifest V2 extensions for testing.
// ---

#include "chrome/browser/extensions/scoped_test_mv2_enabler.h"

#include "extensions/browser/manifest_v2_handler.h"

namespace extensions {

ScopedTestMV2Enabler::ScopedTestMV2Enabler()
    : enable_mv2_extensions_(
          ManifestV2Handler::AllowMV2ExtensionsForTesting(PassKey())) {}

ScopedTestMV2Enabler::~ScopedTestMV2Enabler() = default;

}  // namespace extensions
