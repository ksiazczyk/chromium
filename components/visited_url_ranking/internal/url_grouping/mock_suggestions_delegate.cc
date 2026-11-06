// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock group suggestions delegate implementation
// summary: Implements the constructor and destructor of MockGroupSuggestionsDelegate, a gmock-based test double for the group suggestions delegate interface.
// ---

#include "components/visited_url_ranking/internal/url_grouping/mock_suggestions_delegate.h"

namespace visited_url_ranking {

MockGroupSuggestionsDelegate::MockGroupSuggestionsDelegate() = default;
MockGroupSuggestionsDelegate::~MockGroupSuggestionsDelegate() = default;

}  // namespace visited_url_ranking
