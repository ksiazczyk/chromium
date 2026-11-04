// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Holding space UI label factory implementation
// summary: Implements factory functions that create styled labels for holding space bubble headers, section headers, and placeholder text.
// relations:
//   - implements /ash/system/holding_space/holding_space_ui.h
//   - references /ash/bubble/bubble_utils.h
//   - references /ash/style/ash_color_id.h
// ---

#include "ash/system/holding_space/holding_space_ui.h"

#include "ash/bubble/bubble_utils.h"
#include "ash/style/ash_color_id.h"
#include "ash/style/typography.h"
#include "ui/base/l10n/l10n_util.h"
#include "ui/views/metadata/view_factory.h"

namespace ash::holding_space_ui {

views::Builder<views::Label> CreateTopLevelBubbleHeaderLabel(int message_id) {
  return views::Builder<views::Label>(bubble_utils::CreateLabel(
      TypographyToken::kCrosTitle1, l10n_util::GetStringUTF16(message_id)));
}

views::Builder<views::Label> CreateSectionHeaderLabel(int message_id) {
  return views::Builder<views::Label>(bubble_utils::CreateLabel(
      TypographyToken::kCrosTitle1, l10n_util::GetStringUTF16(message_id)));
}

views::Builder<views::Label> CreateSuggestionsSectionHeaderLabel(
    int message_id) {
  return views::Builder<views::Label>(bubble_utils::CreateLabel(
      TypographyToken::kCrosButton2, l10n_util::GetStringUTF16(message_id),
      kColorAshTextColorSecondary));
}

views::Builder<views::Label> CreateBubblePlaceholderLabel(int message_id) {
  return views::Builder<views::Label>(bubble_utils::CreateLabel(
      TypographyToken::kCrosTitle1, l10n_util::GetStringUTF16(message_id),
      kColorAshTextColorSecondary));
}

views::Builder<views::Label> CreateSectionPlaceholderLabel(
    const std::u16string& text) {
  return views::Builder<views::Label>(bubble_utils::CreateLabel(
      TypographyToken::kCrosBody1, text, kColorAshTextColorSecondary));
}

}  // namespace ash::holding_space_ui
