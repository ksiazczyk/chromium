// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ShellInitParams constructors and destructor
// summary: Defines the default constructor, move constructor, and destructor for the ShellInitParams struct.
// relations:
//   - implements /ash/shell_init_params.h
//   - depends_on /ash/keyboard/ui/keyboard_ui_factory.h
//   - depends_on /ash/shell_delegate.h
// ---

#include "ash/shell_init_params.h"

#include "ash/keyboard/ui/keyboard_ui_factory.h"
#include "ash/shell_delegate.h"
#include "base/values.h"
#include "ui/display/types/native_display_delegate.h"

namespace ash {

ShellInitParams::ShellInitParams() = default;

ShellInitParams::ShellInitParams(ShellInitParams&& other) = default;

ShellInitParams::~ShellInitParams() = default;

}  // namespace ash
