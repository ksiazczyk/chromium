// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert web paste target implementation
// summary: Implements the web paste target value type that pairs a URL with a paste callback.
// relations:
//   - implements /ash/quick_insert/quick_insert_web_paste_target.h
//   - depends_on /base/functional/callback.h
//   - depends_on /url/gurl.h
// ---

#include "ash/quick_insert/quick_insert_web_paste_target.h"

#include <utility>

#include "base/functional/callback.h"
#include "url/gurl.h"

namespace ash {

QuickInsertWebPasteTarget::QuickInsertWebPasteTarget(GURL url,
                                                     base::OnceClosure do_paste)
    : url(std::move(url)), do_paste(std::move(do_paste)) {}

QuickInsertWebPasteTarget::QuickInsertWebPasteTarget(
    QuickInsertWebPasteTarget&&) = default;
QuickInsertWebPasteTarget& QuickInsertWebPasteTarget::operator=(
    QuickInsertWebPasteTarget&&) = default;

QuickInsertWebPasteTarget::~QuickInsertWebPasteTarget() = default;

}  // namespace ash
