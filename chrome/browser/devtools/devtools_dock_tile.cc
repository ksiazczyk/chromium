// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DevTools dock tile stub implementation
// summary: Default no-op implementation of DevToolsDockTile::Update for platforms without a dock tile.
// ---

#include "chrome/browser/devtools/devtools_dock_tile.h"

// static
void DevToolsDockTile::Update(const std::string& label, gfx::Image image) {}
