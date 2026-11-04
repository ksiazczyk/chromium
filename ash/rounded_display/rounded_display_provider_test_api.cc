// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Rounded display provider test API implementation
// summary: Implements a test API exposing RoundedDisplayProvider internals such as panel radii, strategy, host window and gutters for use in tests.
// relations:
//   - references /ash/rounded_display/rounded_display_gutter.h
// ---

#include "ash/rounded_display/rounded_display_provider_test_api.h"

#include "ash/rounded_display/rounded_display_gutter.h"

namespace ash {

RoundedDisplayProviderTestApi::RoundedDisplayProviderTestApi(
    RoundedDisplayProvider* provider)
    : provider_(provider) {}

RoundedDisplayProviderTestApi::~RoundedDisplayProviderTestApi() = default;

const gfx::RoundedCornersF RoundedDisplayProviderTestApi::GetCurrentPanelRadii()
    const {
  return provider_->current_panel_radii_;
}

RoundedDisplayProvider::Strategy
RoundedDisplayProviderTestApi::GetCurrentStrategy() const {
  return provider_->strategy_;
}

const aura::Window* RoundedDisplayProviderTestApi::GetHostWindow() const {
  return provider_->host_window_.get();
}

std::vector<RoundedDisplayGutter*> RoundedDisplayProviderTestApi::GetGutters()
    const {
  std::vector<RoundedDisplayGutter*> gutters;
  provider_->GetGuttersInDrawOrder(gutters);
  return gutters;
}

}  // namespace ash
