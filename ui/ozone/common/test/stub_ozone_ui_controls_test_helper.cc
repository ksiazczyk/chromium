// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Stub Ozone UI controls test helper (implementation)
// summary: Implements stub factory functions for OzoneUIControlsTestHelper on the DRM, Flatland, headless and Cast platforms, each hitting NOTREACHED.
// ---

#include "ui/ozone/common/test/stub_ozone_ui_controls_test_helper.h"

#include "base/logging.h"
#include "base/notreached.h"

namespace ui {

OzoneUIControlsTestHelper* CreateOzoneUIControlsTestHelperDrm() {
  NOTREACHED();
}

OzoneUIControlsTestHelper* CreateOzoneUIControlsTestHelperFlatland() {
  NOTREACHED();
}

OzoneUIControlsTestHelper* CreateOzoneUIControlsTestHelperHeadless() {
  NOTREACHED();
}

OzoneUIControlsTestHelper* CreateOzoneUIControlsTestHelperCast() {
  NOTREACHED();
}

}  // namespace ui
