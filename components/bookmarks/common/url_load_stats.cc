// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UrlLoadStats implementation
// summary: Implements the default constructor, copy constructor and destructor of the bookmarks UrlLoadStats struct.
// ---

#include "components/bookmarks/common/url_load_stats.h"

namespace bookmarks {

UrlLoadStats::UrlLoadStats() = default;
UrlLoadStats::UrlLoadStats(const UrlLoadStats&) = default;
UrlLoadStats::~UrlLoadStats() = default;

}  // namespace bookmarks
