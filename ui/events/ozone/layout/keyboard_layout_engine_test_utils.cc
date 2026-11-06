// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test helper that waits for layout engine readiness
// summary: Implements WaitUntilLayoutEngineIsReadyForTest, which blocks on a RunLoop until the keyboard layout engine signals it is initialised.
// ---

#include "ui/events/ozone/layout/keyboard_layout_engine_test_utils.h"

#include "base/functional/callback.h"
#include "base/run_loop.h"
#include "ui/events/ozone/layout/keyboard_layout_engine.h"
#include "ui/events/ozone/layout/keyboard_layout_engine_manager.h"

namespace ui {

void WaitUntilLayoutEngineIsReadyForTest() {
  base::RunLoop loop;
  ui::KeyboardLayoutEngineManager::GetKeyboardLayoutEngine()
      ->SetInitCallbackForTest(loop.QuitClosure());
  loop.Run();
}

}  // namespace ui
