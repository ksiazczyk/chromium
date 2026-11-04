// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Contextual search web contents helper implementation
// summary: Implements a WebContentsUserData helper that stores and hands off contextual search session handles, input state models, and selected tab IDs.
// ---

#include "chrome/browser/contextual_search/contextual_search_web_contents_helper.h"

#include "content/public/browser/web_contents.h"

ContextualSearchWebContentsHelper::ContextualSearchWebContentsHelper(
    content::WebContents* web_contents)
    : content::WebContentsUserData<ContextualSearchWebContentsHelper>(
          *web_contents) {}

ContextualSearchWebContentsHelper::~ContextualSearchWebContentsHelper() =
    default;

std::unique_ptr<contextual_search::InputStateModel>
ContextualSearchWebContentsHelper::TakeInputStateModel() {
  return std::move(input_state_model_);
}

std::unique_ptr<contextual_search::ContextualSearchSessionHandle>
ContextualSearchWebContentsHelper::TakeSessionHandle() {
  return std::move(session_handle_);
}

const std::vector<int32_t>&
ContextualSearchWebContentsHelper::GetSelectedTabIds() const {
  return selected_tab_ids_;
}

WEB_CONTENTS_USER_DATA_KEY_IMPL(ContextualSearchWebContentsHelper);
