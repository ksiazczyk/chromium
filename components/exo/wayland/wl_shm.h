// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: wl_shm binding declarations
// summary: Declares the bind_shm function that registers the wl_shm shared memory interface for Wayland clients.
// ---

#ifndef COMPONENTS_EXO_WAYLAND_WL_SHM_H_
#define COMPONENTS_EXO_WAYLAND_WL_SHM_H_

#include <stdint.h>

struct wl_client;

namespace exo {
namespace wayland {

void bind_shm(wl_client* client, void* data, uint32_t version, uint32_t id);

}  // namespace wayland
}  // namespace exo

#endif  // COMPONENTS_EXO_WAYLAND_WL_SHM_H_
