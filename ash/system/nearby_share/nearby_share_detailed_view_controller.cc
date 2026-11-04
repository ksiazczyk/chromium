// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Nearby Share detailed view controller implementation
// summary: Implements the controller that creates the Nearby Share detailed view and supplies its accessible name for the unified system tray.
// relations:
//   - depends_on /ash/system/nearby_share/nearby_share_detailed_view_controller.h
//   - depends_on /ash/system/nearby_share/nearby_share_detailed_view.h
//   - depends_on /ash/system/tray/detailed_view_delegate.h
// ---

#include "ash/system/nearby_share/nearby_share_detailed_view_controller.h"

#include "ash/system/nearby_share/nearby_share_detailed_view.h"
#include "ash/system/tray/detailed_view_delegate.h"
#include "base/memory/ptr_util.h"

namespace ash {

NearbyShareDetailedViewController::NearbyShareDetailedViewController(
    UnifiedSystemTrayController* tray_controller)
    : detailed_view_delegate_(
          std::make_unique<DetailedViewDelegate>(tray_controller)) {}

NearbyShareDetailedViewController::~NearbyShareDetailedViewController() =
    default;

std::unique_ptr<views::View> NearbyShareDetailedViewController::CreateView() {
  std::unique_ptr<NearbyShareDetailedView> nearby_share_detailed_view =
      NearbyShareDetailedView::Factory::Create(detailed_view_delegate_.get());

  return base::WrapUnique(nearby_share_detailed_view.release()->GetAsView());
}

std::u16string NearbyShareDetailedViewController::GetAccessibleName() const {
  return u"Quick Share";  // TODO(360150790): Create and use a Quick Share
                          // string.
}

}  // namespace ash
