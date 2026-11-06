// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PlatformWindowInitProperties constructors
// summary: Implements constructors and move assignment for the PlatformWindowInitProperties struct.
// ---

#include "ui/platform_window/platform_window_init_properties.h"

namespace ui {

PlatformWindowInitProperties::PlatformWindowInitProperties() = default;

PlatformWindowInitProperties::PlatformWindowInitProperties(
    const gfx::Rect& bounds)
    : bounds(bounds) {}

PlatformWindowInitProperties::PlatformWindowInitProperties(
    PlatformWindowInitProperties&& props) = default;

PlatformWindowInitProperties& PlatformWindowInitProperties::operator=(
    PlatformWindowInitProperties&&) = default;

PlatformWindowInitProperties::~PlatformWindowInitProperties() = default;

}  // namespace ui
