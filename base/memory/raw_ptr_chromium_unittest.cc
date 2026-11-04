// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: raw_ptr Chromium configuration tests
// summary: Contains Chromium-specific raw_ptr tests asserting that zero-on-construct and zero-on-move behavior is always enabled.
// ---

#include "base/memory/raw_ptr.h"

// This file contains tests related to raw_ptr, that test Chromium-specific
// configuration.

// Chromium expects these to be always enabled.
static_assert(raw_ptr<int>::kZeroOnConstruct);
static_assert(raw_ptr<int>::kZeroOnMove);
