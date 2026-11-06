// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Desktop event client implementation
// summary: Implements DesktopEventClient, allowing event processing in all subtrees and returning the Aura Env as the toplevel event target.
// ---

#include "ui/views/widget/desktop_aura/desktop_event_client.h"

#include "ui/aura/env.h"

namespace views {

DesktopEventClient::DesktopEventClient() = default;

DesktopEventClient::~DesktopEventClient() = default;

bool DesktopEventClient::GetCanProcessEventsWithinSubtree(
    const aura::Window* window) const {
  return true;
}

ui::EventTarget* DesktopEventClient::GetToplevelEventTarget() {
  return aura::Env::GetInstance();
}

}  // namespace views
