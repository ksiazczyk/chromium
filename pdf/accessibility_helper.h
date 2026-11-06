// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PDF accessibility helper header
// summary: Declares GetEnclosingTextRunRangeForCharRange, which maps a character range to the enclosing accessibility text run range in a PDF.
// ---

#ifndef PDF_ACCESSIBILITY_HELPER_H_
#define PDF_ACCESSIBILITY_HELPER_H_

#include "base/containers/span.h"

namespace chrome_pdf {

struct AccessibilityTextRunInfo;
struct AccessibilityTextRunRangeInfo;

AccessibilityTextRunRangeInfo GetEnclosingTextRunRangeForCharRange(
    base::span<const AccessibilityTextRunInfo> text_runs,
    int start_char_index,
    int char_count);

}  // namespace chrome_pdf

#endif  // PDF_ACCESSIBILITY_HELPER_H_
