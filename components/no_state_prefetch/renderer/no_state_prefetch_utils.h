// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: No-state prefetch media load deferral declarations
// summary: Declares DeferMediaLoad and SetShouldDeferMediaLoad, which control whether media loading is postponed for a render frame during no-state prefetch.
// ---

#ifndef COMPONENTS_NO_STATE_PREFETCH_RENDERER_NO_STATE_PREFETCH_UTILS_H_
#define COMPONENTS_NO_STATE_PREFETCH_RENDERER_NO_STATE_PREFETCH_UTILS_H_

#include "base/functional/callback_forward.h"

namespace content {
class RenderFrame;
}

namespace prerender {

// Defers media load for |render_frame| if necessary, and returns true if that
// has been done. Runs |closure| at the end of the operation regardless of
// return value.
bool DeferMediaLoad(content::RenderFrame* render_frame,
                    bool has_played_media_before,
                    base::OnceClosure closure);

// Sets whether media load should be deferred on a RenderFrame.
void SetShouldDeferMediaLoad(content::RenderFrame* render_frame,
                             bool should_defer);
}  // namespace prerender

#endif  // COMPONENTS_NO_STATE_PREFETCH_RENDERER_NO_STATE_PREFETCH_UTILS_H_
