// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockBackend implementation
// summary: Implements the constructor and destructor of the MockBackend test double for the persistent cache Backend interface.
// ---

#include "components/persistent_cache/mock/mock_backend.h"

namespace persistent_cache {

MockBackend::MockBackend() = default;
MockBackend::~MockBackend() = default;

}  // namespace persistent_cache
