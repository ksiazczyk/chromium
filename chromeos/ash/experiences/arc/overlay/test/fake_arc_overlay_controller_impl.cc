// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake ARC overlay controller implementation
// summary: Implements FakeArcOverlayControllerImpl as a no-op stub of ArcOverlayController for use in tests.
// ---

#include "chromeos/ash/experiences/arc/overlay/test/fake_arc_overlay_controller_impl.h"

namespace ash {

FakeArcOverlayControllerImpl::FakeArcOverlayControllerImpl(
    aura::Window* host_window) {}

FakeArcOverlayControllerImpl::~FakeArcOverlayControllerImpl() = default;

void FakeArcOverlayControllerImpl::AttachOverlay(aura::Window* overlay_window) {
}

}  // namespace ash
