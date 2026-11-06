// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Renderer settings definitions
// summary: Provides the default constructor, copy constructor, and destructor definitions for the RendererSettings class.
// ---

#include "components/viz/common/display/renderer_settings.h"

namespace viz {

RendererSettings::RendererSettings() = default;

RendererSettings::RendererSettings(const RendererSettings& other) = default;

RendererSettings::~RendererSettings() = default;

}  // namespace viz
