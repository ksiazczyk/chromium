// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Flatland overlay manager class declaration
// summary: Declares OverlayManagerFlatland, an OverlayManagerOzone that creates overlay candidate evaluators for the Flatland platform.
// ---

#ifndef UI_OZONE_PLATFORM_FLATLAND_OVERLAY_MANAGER_FLATLAND_H_
#define UI_OZONE_PLATFORM_FLATLAND_OVERLAY_MANAGER_FLATLAND_H_

#include <memory>

#include "ui/ozone/public/overlay_manager_ozone.h"

namespace ui {

class OverlayManagerFlatland : public OverlayManagerOzone {
 public:
  OverlayManagerFlatland();
  ~OverlayManagerFlatland() override;

  OverlayManagerFlatland(const OverlayManagerFlatland&) = delete;
  OverlayManagerFlatland& operator=(const OverlayManagerFlatland&) = delete;

  // OverlayManagerOzone implementation
  std::unique_ptr<OverlayCandidatesOzone> CreateOverlayCandidates(
      gfx::AcceleratedWidget widget) override;
};

}  // namespace ui

#endif  // UI_OZONE_PLATFORM_FLATLAND_OVERLAY_MANAGER_FLATLAND_H_
