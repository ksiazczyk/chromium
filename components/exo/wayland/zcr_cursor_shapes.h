// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Wayland cursor shapes header
// summary: Declares bind_cursor_shapes, the entry point for binding the zcr cursor shapes protocol in the Exo Wayland server.
// ---

#ifndef COMPONENTS_EXO_WAYLAND_ZCR_CURSOR_SHAPES_H_
#define COMPONENTS_EXO_WAYLAND_ZCR_CURSOR_SHAPES_H_

#include <stdint.h>

struct wl_client;

namespace exo {
namespace wayland {

void bind_cursor_shapes(wl_client* client,
                        void* data,
                        uint32_t version,
                        uint32_t id);

}  // namespace wayland
}  // namespace exo

#endif  // COMPONENTS_EXO_WAYLAND_ZCR_CURSOR_SHAPES_H_
