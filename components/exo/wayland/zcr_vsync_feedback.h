// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: 'zcr_vsync_feedback.h: vsync feedback protocol binding header'
// summary: Declares bind_vsync_feedback, the entry point for binding the vsync-feedback Wayland protocol in the exo wayland server.
// ---

#ifndef COMPONENTS_EXO_WAYLAND_ZCR_VSYNC_FEEDBACK_H_
#define COMPONENTS_EXO_WAYLAND_ZCR_VSYNC_FEEDBACK_H_

#include <stdint.h>

struct wl_client;

namespace exo {
namespace wayland {

void bind_vsync_feedback(wl_client* client,
                         void* data,
                         uint32_t version,
                         uint32_t id);

}  // namespace wayland
}  // namespace exo

#endif  // COMPONENTS_EXO_WAYLAND_ZCR_VSYNC_FEEDBACK_H_
