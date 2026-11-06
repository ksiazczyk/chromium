// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Implementation of WaylandServerHandle
// summary: Implements the handle destructor that asks the WaylandServerController to close the associated on-demand server socket.
// ---

#include "components/exo/server/wayland_server_handle.h"

#include "components/exo/server/wayland_server_controller.h"

namespace exo {

WaylandServerHandle::~WaylandServerHandle() {
  WaylandServerController* controller = WaylandServerController::Get();
  if (!controller) {
    return;
  }
  controller->CloseSocket(this);
}

WaylandServerHandle::WaylandServerHandle() = default;

}  // namespace exo
