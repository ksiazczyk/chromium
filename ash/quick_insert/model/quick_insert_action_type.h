// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert action type enum
// summary: Defines the QuickInsertActionType enum listing possible actions for quick insert results such as do, insert, open, and create.
// relations:
//   - depends_on /ash/ash_export.h
// ---

#ifndef ASH_QUICK_INSERT_MODEL_QUICK_INSERT_ACTION_TYPE_H_
#define ASH_QUICK_INSERT_MODEL_QUICK_INSERT_ACTION_TYPE_H_

#include "ash/ash_export.h"

namespace ash {

enum class QuickInsertActionType {
  // Performs the action represented by the result.
  kDo,
  // Inserts the result into the focused input field.
  kInsert,
  // Opens the result in some window.
  kOpen,
  // Requests the result to be created.
  kCreate,
};
}

#endif  // ASH_QUICK_INSERT_MODEL_QUICK_INSERT_ACTION_TYPE_H_
