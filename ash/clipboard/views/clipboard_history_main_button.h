// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Clipboard history main button class declaration
// summary: Declares ClipboardHistoryMainButton, a views::Button subclass that forwards mouse and gesture events to its parent clipboard history item view.
// relations:
//   - depends_on /base/memory/raw_ptr.h
//   - depends_on /ui/base/metadata/metadata_header_macros.h
//   - depends_on /ui/views/controls/button/button.h
// ---

#ifndef ASH_CLIPBOARD_VIEWS_CLIPBOARD_HISTORY_MAIN_BUTTON_H_
#define ASH_CLIPBOARD_VIEWS_CLIPBOARD_HISTORY_MAIN_BUTTON_H_

#include "base/memory/raw_ptr.h"
#include "ui/base/metadata/metadata_header_macros.h"
#include "ui/views/controls/button/button.h"

namespace ash {
class ClipboardHistoryItemView;

// The view responding to mouse click or gesture tap events.
class ClipboardHistoryMainButton : public views::Button {
  METADATA_HEADER(ClipboardHistoryMainButton, views::Button)

 public:
  explicit ClipboardHistoryMainButton(ClipboardHistoryItemView* container);
  ClipboardHistoryMainButton(const ClipboardHistoryMainButton& rhs) = delete;
  ClipboardHistoryMainButton& operator=(const ClipboardHistoryMainButton& rhs) =
      delete;
  ~ClipboardHistoryMainButton() override;

 private:
  // views::Button:
  void OnClickCanceled(const ui::Event& event) override;
  void OnThemeChanged() override;
  void OnGestureEvent(ui::GestureEvent* event) override;
  void PaintButtonContents(gfx::Canvas* canvas) override;

  // The parent view.
  const raw_ptr<ClipboardHistoryItemView> container_;
};

}  // namespace ash

#endif  // ASH_CLIPBOARD_VIEWS_CLIPBOARD_HISTORY_MAIN_BUTTON_H_
