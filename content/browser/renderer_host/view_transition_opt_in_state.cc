// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: View transition opt-in state implementation
// summary: Implements per-document browser-side storage of a document's same-origin opt-in for cross-document view transitions as DocumentUserData.
// ---

#include "content/browser/renderer_host/view_transition_opt_in_state.h"

namespace content {

DOCUMENT_USER_DATA_KEY_IMPL(ViewTransitionOptInState);

ViewTransitionOptInState::ViewTransitionOptInState(
    RenderFrameHost* render_frame_host)
    : DocumentUserData<ViewTransitionOptInState>(render_frame_host) {}

ViewTransitionOptInState::~ViewTransitionOptInState() = default;

}  // namespace content
