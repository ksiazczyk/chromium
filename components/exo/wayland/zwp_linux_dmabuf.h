// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Wayland Linux DMA-BUF protocol header
// summary: Declares the bind function that registers the Linux DMA-BUF protocol with Wayland clients.
// ---

#ifndef COMPONENTS_EXO_WAYLAND_ZWP_LINUX_DMABUF_H_
#define COMPONENTS_EXO_WAYLAND_ZWP_LINUX_DMABUF_H_

#include <stdint.h>

struct wl_client;

namespace exo {
namespace wayland {

void bind_linux_dmabuf(wl_client* client,
                       void* data,
                       uint32_t version,
                       uint32_t id);

}  // namespace wayland
}  // namespace exo

#endif  // COMPONENTS_EXO_WAYLAND_ZWP_LINUX_DMABUF_H_
