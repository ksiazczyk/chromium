// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PDF Skia font manager implementation
// summary: Provides a PDFium Skia custom font manager that returns an empty Fontations-based SkFontMgr for PDF rendering.
// ---

#include "third_party/skia/include/core/SkFontMgr.h"
#include "third_party/skia/include/ports/SkFontMgr_Fontations.h"

sk_sp<SkFontMgr> pdfium_skia_custom_font_manager() {
  return SkFontMgr_New_Fontations_Empty();
}
