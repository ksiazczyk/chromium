// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Skia font fallback typeface header
// summary: Declares GetSkiaFallbackTypeface, which returns a Skia fallback typeface for a template font, locale and text.
// ---

#ifndef UI_GFX_FONT_FALLBACK_SKIA_IMPL_H_
#define UI_GFX_FONT_FALLBACK_SKIA_IMPL_H_

#include <string>
#include <string_view>

#include "third_party/skia/include/core/SkRefCnt.h"
#include "third_party/skia/include/core/SkTypeface.h"
#include "ui/gfx/font.h"

namespace gfx {

sk_sp<SkTypeface> GetSkiaFallbackTypeface(const Font& template_font,
                                          const std::string& locale,
                                          std::u16string_view text);
}

#endif  // UI_GFX_FONT_FALLBACK_SKIA_IMPL_H_
