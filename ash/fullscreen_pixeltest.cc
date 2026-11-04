// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fullscreen pixel test
// summary: Pixel test that compares the primary fullscreen UI of an active user session against reference screenshots.
// relations:
//   - depends_on /ash/shell.h
//   - depends_on /ash/test/ash_test_base.h
//   - depends_on /ash/test/pixel/ash_pixel_differ.h
// ---

#include "ash/shell.h"
#include "ash/test/ash_test_base.h"
#include "ash/test/pixel/ash_pixel_differ.h"
#include "ash/test/pixel/ash_pixel_test_init_params.h"

namespace ash {

class FullscreenPixelTest : public AshTestBase {
 public:
  FullscreenPixelTest() = default;

  // AshTestBase:
  std::optional<pixel_test::InitParams> CreatePixelTestInitParams()
      const override {
    return pixel_test::InitParams();
  }
};

// Verifies the primary fullscreen of an active user session.
TEST_F(FullscreenPixelTest, VerifyDefaultPrimaryDisplay) {
  EXPECT_TRUE(GetPixelDiffer()->CompareUiComponentsOnPrimaryScreen(
      "primary_display", /*revision_number=*/11,
      Shell::GetPrimaryRootWindow()));
}

}  // namespace ash
