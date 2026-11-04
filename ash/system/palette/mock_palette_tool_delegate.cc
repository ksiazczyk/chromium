// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock palette tool delegate implementation
// summary: Provides the constructor and destructor for MockPaletteToolDelegate, a GoogleMock double of PaletteTool::Delegate used in palette tests.
// ---

#include "ash/system/palette/mock_palette_tool_delegate.h"

namespace ash {

MockPaletteToolDelegate::MockPaletteToolDelegate() = default;

MockPaletteToolDelegate::~MockPaletteToolDelegate() = default;

}  // namespace ash
