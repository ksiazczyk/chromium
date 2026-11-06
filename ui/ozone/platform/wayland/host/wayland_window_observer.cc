// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WaylandWindowObserver default implementations
// summary: Provides default no-op implementations for the window observer callbacks such as add, remove, configure, role assignment, and subsurface changes.
// ---

#include "ui/ozone/platform/wayland/host/wayland_window_observer.h"

namespace ui {

WaylandWindowObserver::~WaylandWindowObserver() = default;

void WaylandWindowObserver::OnWindowAdded(WaylandWindow* window) {}

void WaylandWindowObserver::OnWindowRemoved(WaylandWindow* window) {}

void WaylandWindowObserver::OnWindowConfigured(WaylandWindow* window) {}

void WaylandWindowObserver::OnWindowRoleAssigned(WaylandWindow* window) {}

void WaylandWindowObserver::OnSubsurfaceAdded(WaylandWindow* window,
                                              WaylandSubsurface* subsurface) {}

void WaylandWindowObserver::OnSubsurfaceRemoved(WaylandWindow* window,
                                                WaylandSubsurface* subsurface) {
}

void WaylandWindowObserver::OnWindowRemovedFromSession(WaylandWindow* window) {}

}  // namespace ui
