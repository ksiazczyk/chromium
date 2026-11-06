// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Interactive test temporary storage implementation
// summary: Implements the constructor and destructor of the storage that holds temporary values shared across interactive test steps.
// ---

#include "ui/base/interaction/interactive_test_temporary.h"

namespace ui::test::internal {

InteractiveTestTemporaryStorage::InteractiveTestTemporaryStorage() = default;
InteractiveTestTemporaryStorage::~InteractiveTestTemporaryStorage() = default;

}  // namespace ui::test::internal
