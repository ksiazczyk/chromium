// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake keyboard layout monitor implementation
// summary: Implements a dummy keyboard layout monitor whose Start method does nothing.
// ---

#include "remoting/host/fake_keyboard_layout_monitor.h"

namespace remoting {

FakeKeyboardLayoutMonitor::FakeKeyboardLayoutMonitor() = default;
FakeKeyboardLayoutMonitor::~FakeKeyboardLayoutMonitor() = default;
void FakeKeyboardLayoutMonitor::Start() {}

}  // namespace remoting
