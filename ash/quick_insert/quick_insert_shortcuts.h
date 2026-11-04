// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert Caps Lock shortcut declaration
// summary: Declares GetQuickInsertShortcutForCapsLock, which returns the Quick Insert shortcut associated with the Caps Lock key.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /ash/quick_insert/quick_insert_search_result.h
// ---

#ifndef ASH_QUICK_INSERT_QUICK_INSERT_SHORTCUTS_H_
#define ASH_QUICK_INSERT_QUICK_INSERT_SHORTCUTS_H_

#include "ash/ash_export.h"
#include "ash/quick_insert/quick_insert_search_result.h"

namespace ash {

ASH_EXPORT QuickInsertCapsLockResult::Shortcut
GetQuickInsertShortcutForCapsLock();

}  // namespace ash

#endif  // ASH_QUICK_INSERT_QUICK_INSERT_SHORTCUTS_H_
