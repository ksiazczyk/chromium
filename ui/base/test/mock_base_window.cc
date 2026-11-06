// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockBaseWindow implementation
// summary: Implements the constructor and destructor of the MockBaseWindow test double for the ui::BaseWindow interface.
// ---

#include "ui/base/test/mock_base_window.h"

namespace ui {

MockBaseWindow::MockBaseWindow() = default;
MockBaseWindow::~MockBaseWindow() = default;

}  // namespace ui
