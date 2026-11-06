// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SplitTabVisualData implementation
// summary: Implements the SplitTabVisualData constructors and destructor, defaulting to a side-by-side split layout.
// ---

#include "components/split_tabs/split_tab_visual_data.h"

namespace split_tabs {

SplitTabVisualData::SplitTabVisualData()
    : split_layout_(SplitTabLayout::kSideBySide) {}

SplitTabVisualData::SplitTabVisualData(SplitTabLayout split_layout)
    : split_layout_(split_layout) {}

SplitTabVisualData::SplitTabVisualData(SplitTabLayout split_layout,
                                       double split_ratio)
    : split_layout_(split_layout), split_ratio_(split_ratio) {}

SplitTabVisualData::~SplitTabVisualData() = default;

}  // namespace split_tabs
