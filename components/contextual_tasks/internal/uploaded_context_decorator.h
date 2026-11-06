// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Uploaded context decorator class declaration
// summary: Declares the UploadedContextDecorator, a token-based decorator that decorates contexts with tokens in the uploaded state of a contextual search session.
// ---

#ifndef COMPONENTS_CONTEXTUAL_TASKS_INTERNAL_UPLOADED_CONTEXT_DECORATOR_H_
#define COMPONENTS_CONTEXTUAL_TASKS_INTERNAL_UPLOADED_CONTEXT_DECORATOR_H_

#include "components/contextual_tasks/internal/token_based_context_decorator.h"

namespace contextual_tasks {
struct ContextDecorationParams;

class UploadedContextDecorator : public TokenBasedContextDecorator {
 public:
  UploadedContextDecorator();
  ~UploadedContextDecorator() override;

 protected:
  std::vector<base::UnguessableToken> GetTokensToDecorate(
      contextual_search::ContextualSearchSessionHandle* handle) const override;
};

}  // namespace contextual_tasks

#endif  // COMPONENTS_CONTEXTUAL_TASKS_INTERNAL_UPLOADED_CONTEXT_DECORATOR_H_
