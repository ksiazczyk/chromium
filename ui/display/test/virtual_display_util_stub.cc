// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Virtual display utility stub
// summary: Provides a stub VirtualDisplayUtil::TryCreate that returns nullptr on platforms without virtual display support.
// ---

#include "ui/display/test/virtual_display_util.h"

namespace display::test {

// Stub definition for unimplemented platforms to prevent linker errors.

// static
std::unique_ptr<VirtualDisplayUtil> VirtualDisplayUtil::TryCreate(
    Screen* screen) {
  return nullptr;
}

}  // namespace display::test
