// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Windows UI controls internal helpers
// summary: Declares internal Windows helper functions for sending synthetic key, mouse and touch events in tests.
// ---

#ifndef UI_BASE_TEST_UI_CONTROLS_INTERNAL_WIN_H_
#define UI_BASE_TEST_UI_CONTROLS_INTERNAL_WIN_H_

#include "base/functional/callback_forward.h"
#include "ui/base/test/ui_controls.h"

namespace ui_controls {
namespace internal {

// A utility functions for windows to send key or mouse events and
// run the task. These functions are internal, but exported so that
// aura implementation can use these utility functions.
bool SendKeyPressReleaseImpl(HWND hwnd,
                             ui::KeyboardCode key,
                             int accelerator_state,
                             KeyEventType wait_for,
                             base::OnceClosure task);
bool SendMouseMoveImpl(int screen_x, int screen_y, base::OnceClosure task);
bool SendMouseEventsImpl(MouseButton type,
                         int button_state,
                         base::OnceClosure task,
                         int accelerator_state);
bool SendTouchEventsImpl(int action, int num, int x, int y);
void QueueDragUnblockNudge();

}  // namespace internal
}  // namespace ui_controls

#endif  // UI_BASE_TEST_UI_CONTROLS_INTERNAL_WIN_H_
