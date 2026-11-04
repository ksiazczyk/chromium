// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DiscardableMemory base class implementation
// summary: Implements the default constructor and destructor of the base::DiscardableMemory interface.
// ---

#include "base/memory/discardable_memory.h"

namespace base {

DiscardableMemory::DiscardableMemory() = default;

DiscardableMemory::~DiscardableMemory() = default;

}  // namespace base
