// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NoStatePrefetchContentsDelegate defaults
// summary: Provides default no-op implementations for the embedder delegate hooks invoked when prefetch contents are created or released.
// ---

#include "components/no_state_prefetch/browser/no_state_prefetch_contents_delegate.h"

namespace prerender {

NoStatePrefetchContentsDelegate::NoStatePrefetchContentsDelegate() = default;

void NoStatePrefetchContentsDelegate::OnNoStatePrefetchContentsCreated(
    content::WebContents* web_contents) {}

void NoStatePrefetchContentsDelegate::ReleaseNoStatePrefetchContents(
    content::WebContents* web_contents) {}

}  // namespace prerender
