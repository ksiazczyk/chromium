// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert Icons Header
// summary: Declares GetIconForQuickInsertCategory, which returns an image model icon for a given Quick Insert category.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /ash/quick_insert/quick_insert_category.h
// ---

#ifndef ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_ICONS_H_
#define ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_ICONS_H_

#include "ash/ash_export.h"
#include "ash/quick_insert/quick_insert_category.h"
#include "ash/resources/vector_icons/vector_icons.h"

namespace ui {
class ImageModel;
}

namespace ash {

ui::ImageModel GetIconForQuickInsertCategory(QuickInsertCategory category);

}  // namespace ash

#endif  // ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_ICONS_H_
