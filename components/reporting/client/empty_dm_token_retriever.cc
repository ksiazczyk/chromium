// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: EmptyDMTokenRetriever implementation
// summary: Implements EmptyDMTokenRetriever by running the completion callback with an empty DM token result.
// ---

#include "components/reporting/client/empty_dm_token_retriever.h"

#include <utility>

#include "base/functional/callback.h"

namespace reporting {

void EmptyDMTokenRetriever::RetrieveDMToken(
    DMTokenRetriever::CompletionCallback completion_cb) {
  std::move(completion_cb).Run("");
}

}  // namespace reporting
