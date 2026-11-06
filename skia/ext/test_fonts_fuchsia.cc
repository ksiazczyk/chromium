// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fuchsia test SkFontMgr initialization
// summary: Implements InitializeSkFontMgrForTest for Fuchsia by overriding the default SkFontMgr with a Fuchsia font manager backed by the test fonts provider.
// ---

#include "skia/ext/test_fonts_fuchsia.h"

#include <fuchsia/fonts/cpp/fidl.h>

#include "skia/ext/font_utils.h"
#include "third_party/skia/include/core/SkFontMgr.h"
#include "third_party/skia/include/ports/SkFontMgr_fuchsia.h"
#include "third_party/skia/include/ports/SkFontScanner_Fontations.h"

namespace skia {

void InitializeSkFontMgrForTest() {
  OverrideDefaultSkFontMgr(SkFontMgr_New_Fuchsia(
      GetTestFontsProvider().BindSync(), SkFontScanner_Make_Fontations()));
}

}  // namespace skia
