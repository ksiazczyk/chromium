// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert search bar textfield implementation
// summary: Implements the search bar textfield that forwards focus indicator state to the Quick Insert search field view.
// relations:
//   - implements /ash/quick_insert/views/quick_insert_search_bar_textfield.h
//   - depends_on /ash/quick_insert/views/quick_insert_search_field_view.h
//   - depends_on /ui/base/metadata/metadata_impl_macros.h
// ---

#include "ash/quick_insert/views/quick_insert_search_bar_textfield.h"

#include "ash/quick_insert/views/quick_insert_search_field_view.h"
#include "ui/base/metadata/metadata_impl_macros.h"

namespace ash {

QuickInsertSearchBarTextfield::QuickInsertSearchBarTextfield(
    QuickInsertSearchFieldView* search_field_view)
    : search_field_view_(search_field_view) {}

QuickInsertSearchBarTextfield::~QuickInsertSearchBarTextfield() = default;

void QuickInsertSearchBarTextfield::SetShouldShowFocusIndicator(
    bool should_show_focus_indicator) {
  search_field_view_->SetShouldShowFocusIndicator(should_show_focus_indicator);
}

BEGIN_METADATA(QuickInsertSearchBarTextfield)
END_METADATA

}  // namespace ash
