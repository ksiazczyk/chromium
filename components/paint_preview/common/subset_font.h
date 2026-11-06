// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Font subsetting API
// summary: Declares SubsetFont, which reduces a typeface to only the glyphs recorded in a GlyphUsage set and returns null on failure.
// ---

#ifndef COMPONENTS_PAINT_PREVIEW_COMMON_SUBSET_FONT_H_
#define COMPONENTS_PAINT_PREVIEW_COMMON_SUBSET_FONT_H_

#include "components/paint_preview/common/glyph_usage.h"
#include "third_party/skia/include/core/SkData.h"
#include "third_party/skia/include/core/SkRefCnt.h"

class SkTypeface;

namespace paint_preview {

// Subsets |typeface| to only contain the glyphs in |usage|. Returns nullptr on
// failure.
sk_sp<SkData> SubsetFont(SkTypeface* typeface, const GlyphUsage& usage);

}  // namespace paint_preview

#endif  // COMPONENTS_PAINT_PREVIEW_COMMON_SUBSET_FONT_H_
