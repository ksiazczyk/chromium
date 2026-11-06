// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Uploaded context decorator implementation
// summary: Implements the uploaded context decorator, returning the uploaded context tokens from the contextual search session handle for context decoration.
// ---

#include "components/contextual_tasks/internal/uploaded_context_decorator.h"

#include "components/contextual_search/contextual_search_session_handle.h"

namespace contextual_tasks {

UploadedContextDecorator::UploadedContextDecorator() = default;
UploadedContextDecorator::~UploadedContextDecorator() = default;

std::vector<base::UnguessableToken>
UploadedContextDecorator::GetTokensToDecorate(
    contextual_search::ContextualSearchSessionHandle* handle) const {
  return handle->GetUploadedContextTokens();
}

}  // namespace contextual_tasks
