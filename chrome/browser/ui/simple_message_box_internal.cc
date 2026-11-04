// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Simple message box internal flag
// summary: Defines the internal test flag that skips blocking message boxes during tests.
// ---

#include "chrome/browser/ui/simple_message_box_internal.h"

namespace chrome::internal {

bool g_should_skip_message_box_for_test = false;

}  // namespace chrome::internal
