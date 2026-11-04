// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert preview metadata header
// summary: Declares QuickInsertGetFilePreviewDescription, which turns file info into preview justification text.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /base/files/file.h
// ---

#ifndef ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_PREVIEW_METADATA_H_
#define ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_PREVIEW_METADATA_H_

#include <optional>
#include <string>

#include "ash/ash_export.h"
#include "base/files/file.h"

namespace ash {

ASH_EXPORT std::u16string QuickInsertGetFilePreviewDescription(
    std::optional<base::File::Info> info);
}

#endif  // ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_PREVIEW_METADATA_H_
