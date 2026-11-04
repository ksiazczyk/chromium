// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert mode type enum
// summary: 'Defines the QuickInsertModeType enum describing how Quick Insert was triggered: unfocused, with or without selected text, or focused in a password field.'
// relations:
//   - depends_on /ash/ash_export.h
// ---

#ifndef ASH_QUICK_INSERT_MODEL_QUICK_INSERT_MODE_TYPE_H_
#define ASH_QUICK_INSERT_MODEL_QUICK_INSERT_MODE_TYPE_H_

#include "ash/ash_export.h"

namespace ash {

enum class QuickInsertModeType {
  // Triggered without focusing on an input field.
  kUnfocused,
  // Triggered with focus, but no selected text in a non-password field.
  kNoSelection,
  // Triggered with focus and selected text in a non-password field.
  kHasSelection,
  // Triggered with focus in a password field.
  kPassword,
};
}

#endif  // ASH_QUICK_INSERT_MODEL_QUICK_INSERT_MODE_TYPE_H_
