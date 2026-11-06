// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SwapRenderFrame declaration for guest contents
// summary: Declares the SwapRenderFrame function that asks the browser to swap a render frame with the main frame of a guest WebContents identified by a token.
// ---

#ifndef COMPONENTS_GUEST_CONTENTS_RENDERER_SWAP_RENDER_FRAME_H_
#define COMPONENTS_GUEST_CONTENTS_RENDERER_SWAP_RENDER_FRAME_H_

#include "base/values.h"

namespace base {
class UnguessableToken;
}  // namespace base

namespace content {
class RenderFrame;
}  // namespace content

namespace guest_contents::renderer {

// Asks the browser to swap `render_frame` with the main frame of the guest
// WebContents identified by `guest_contents_id`.
void SwapRenderFrame(content::RenderFrame* render_frame,
                     const base::UnguessableToken& guest_contents_id);

}  // namespace guest_contents::renderer

#endif  // COMPONENTS_GUEST_CONTENTS_RENDERER_SWAP_RENDER_FRAME_H_
