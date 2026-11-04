// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert shortcut hint view header
// summary: Declares the shortcut hint view that renders a keyboard shortcut hint for a caps lock result and exposes its accessible text.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /ash/quick_insert/quick_insert_search_result.h
//   - depends_on /ui/base/metadata/metadata_header_macros.h
// ---

#ifndef ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_SHORTCUT_HINT_VIEW_H_
#define ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_SHORTCUT_HINT_VIEW_H_

#include <string>

#include "ash/ash_export.h"
#include "ash/quick_insert/quick_insert_search_result.h"
#include "ui/base/metadata/metadata_header_macros.h"
#include "ui/views/view.h"

namespace ash {

class ASH_EXPORT QuickInsertShortcutHintView : public views::View {
  METADATA_HEADER(QuickInsertShortcutHintView, views::View)

 public:
  explicit QuickInsertShortcutHintView(QuickInsertCapsLockResult::Shortcut);
  QuickInsertShortcutHintView(const QuickInsertShortcutHintView&) = delete;
  QuickInsertShortcutHintView& operator=(const QuickInsertShortcutHintView&) =
      delete;
  ~QuickInsertShortcutHintView() override;

  const std::u16string& GetShortcutText() const;

 private:
  std::u16string shortcut_text_;
};

}  // namespace ash

#endif  // ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_SHORTCUT_HINT_VIEW_H_
