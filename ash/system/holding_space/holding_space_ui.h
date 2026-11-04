// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Holding space UI label factory declarations
// summary: Declares label builder factory functions for holding space top-level bubble headers, section headers, and bubble and section placeholders.
// relations:
//   - references /ui/views/controls/label.h
//   - references /ui/views/metadata/view_factory.h
// ---

#ifndef ASH_SYSTEM_HOLDING_SPACE_HOLDING_SPACE_UI_H_
#define ASH_SYSTEM_HOLDING_SPACE_HOLDING_SPACE_UI_H_

#include <string>

#include "ui/views/controls/label.h"
#include "ui/views/metadata/view_factory.h"

namespace ash::holding_space_ui {

// Headers ---------------------------------------------------------------------

// Creates and returns a label to be used for the top-level bubble header.
views::Builder<views::Label> CreateTopLevelBubbleHeaderLabel(int message_id);

// Creates and returns a label to be used for a section header.
views::Builder<views::Label> CreateSectionHeaderLabel(int message_id);

// Creates and returns a label to be used for the suggestions section header.
views::Builder<views::Label> CreateSuggestionsSectionHeaderLabel(
    int message_id);

// Placeholders ----------------------------------------------------------------

// Creates and returns a label to be used for a bubble placeholder.
views::Builder<views::Label> CreateBubblePlaceholderLabel(int message_id);

// Creates and returns a label to be used for a section placeholder.
views::Builder<views::Label> CreateSectionPlaceholderLabel(
    const std::u16string& text);

}  // namespace ash::holding_space_ui

#endif  // ASH_SYSTEM_HOLDING_SPACE_HOLDING_SPACE_UI_H_
