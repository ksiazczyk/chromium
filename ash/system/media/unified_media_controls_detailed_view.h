// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Unified media controls detailed view header
// summary: Declares UnifiedMediaControlsDetailedView, a TrayDetailedView subclass that displays all active media sessions in the unified system tray.
// relations:
//   - depends_on /ash/system/tray/tray_detailed_view.h
//   - depends_on /ui/base/metadata/metadata_header_macros.h
// ---

#ifndef ASH_SYSTEM_MEDIA_UNIFIED_MEDIA_CONTROLS_DETAILED_VIEW_H_
#define ASH_SYSTEM_MEDIA_UNIFIED_MEDIA_CONTROLS_DETAILED_VIEW_H_

#include "ash/system/tray/tray_detailed_view.h"
#include "ui/base/metadata/metadata_header_macros.h"

namespace ash {

// Detailed view displaying all active media sessions
class UnifiedMediaControlsDetailedView : public TrayDetailedView {
  METADATA_HEADER(UnifiedMediaControlsDetailedView, TrayDetailedView)

 public:
  UnifiedMediaControlsDetailedView(
      DetailedViewDelegate* delegate,
      std::unique_ptr<views::View> notification_list_view);
  ~UnifiedMediaControlsDetailedView() override = default;

 private:
  // TrayDetailedView implementation.
  void CreateExtraTitleRowButtons() override;
};

}  // namespace ash

#endif  // ASH_SYSTEM_MEDIA_UNIFIED_MEDIA_CONTROLS_DETAILED_VIEW_H_
