// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert Emoji Bar View Delegate Header
// summary: Delegate interface for the Quick Insert emoji bar view, handling search result selection, GIF toggling, and showing the emoji picker.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /ash/quick_insert/quick_insert_search_result.h
//   - references /ash/quick_insert/views/quick_insert_emoji_bar_view.h
// ---

#ifndef ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_EMOJI_BAR_VIEW_DELEGATE_H_
#define ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_EMOJI_BAR_VIEW_DELEGATE_H_

#include "ash/ash_export.h"
#include "ash/quick_insert/quick_insert_search_result.h"

namespace ui {
enum class EmojiPickerCategory;
}

namespace ash {

// Delegate for `QuickInsertEmojiBarView`.
class ASH_EXPORT QuickInsertEmojiBarViewDelegate {
 public:
  virtual void SelectSearchResult(const QuickInsertSearchResult& result) = 0;

  // Toggle whether to show GIF results or not.
  // `is_checked` is whether the GIFs button is checked.
  virtual void ToggleGifs(bool is_checked) = 0;

  virtual void ShowEmojiPicker(ui::EmojiPickerCategory category) = 0;
};

}  // namespace ash

#endif  // ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_EMOJI_BAR_VIEW_DELEGATE_H_
