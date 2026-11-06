// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Hit-test conversion declaration
// summary: Declares HitTestToWmMoveResizeDirection, which maps a hit-test value to an X11 NET_WM_MOVERESIZE direction or returns -1.
// ---

#ifndef UI_OZONE_PLATFORM_X11_HIT_TEST_X11_H_
#define UI_OZONE_PLATFORM_X11_HIT_TEST_X11_H_

namespace ui {

// Converts a HitTestCompat into an X11 direction recognisable by
// NET_WM_MOVERESIZE event.  Returns -1 if no conversion is possible.
int HitTestToWmMoveResizeDirection(int hittest);

}  // namespace ui

#endif  // UI_OZONE_PLATFORM_X11_HIT_TEST_X11_H_
