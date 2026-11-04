// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: System tray global getter
// summary: Implements the SystemTray::Get() accessor that returns the system tray model from the active Ash shell instance, or null when no shell exists.
// relations:
//   - implements /ash/public/cpp/system_tray.h
//   - references /ash/shell.h
//   - references /ash/system/model/system_tray_model.h
// ---

#include "ash/public/cpp/system_tray.h"

#include "ash/shell.h"
#include "ash/system/model/system_tray_model.h"

namespace ash {

// static
SystemTray* SystemTray::Get() {
  // Use the `SystemTray` object created inside `Shell` for this global getter.
  // Note that `Shell` can be destroyed before this getter is called.
  return Shell::HasInstance() ? Shell::Get()->system_tray_model() : nullptr;
}

}  // namespace ash
