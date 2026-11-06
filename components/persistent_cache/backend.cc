// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Backend base class implementation
// summary: Implements the constructor and destructor of the abstract Backend persistence interface.
// ---

#include "components/persistent_cache/backend.h"

namespace persistent_cache {

Backend::Backend() = default;
Backend::~Backend() = default;

}  // namespace persistent_cache
