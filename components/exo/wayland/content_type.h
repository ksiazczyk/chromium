// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Content type binder declaration
// summary: Declares bind_content_type, the binding function for the wp_content_type_manager_v1 Wayland protocol.
// ---

#ifndef COMPONENTS_EXO_WAYLAND_CONTENT_TYPE_H_
#define COMPONENTS_EXO_WAYLAND_CONTENT_TYPE_H_

#include <stdint.h>

struct wl_client;

namespace exo {
namespace wayland {

void bind_content_type(wl_client* client,
                       void* data,
                       uint32_t version,
                       uint32_t id);

}  // namespace wayland
}  // namespace exo

#endif  // COMPONENTS_EXO_WAYLAND_CONTENT_TYPE_H_
