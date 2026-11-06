// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: 'zcr_ui_controls_stub.cc: stub implementation of UiControls'
// summary: Provides an empty stub implementation of the UiControls class for builds without ui-controls protocol support.
// ---

#include "components/exo/wayland/zcr_ui_controls.h"

namespace exo::wayland {

struct UiControls::UiControlsState {};

UiControls::UiControls(Server* server) {}

UiControls::~UiControls() = default;

}  // namespace exo::wayland
