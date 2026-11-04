// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Nearby Share detailed view factory
// summary: Implements the NearbyShareDetailedView factory, creating NearbyShareDetailedViewImpl instances for the Quick Settings detailed page.
// relations:
//   - depends_on /ash/system/nearby_share/nearby_share_detailed_view.h
//   - depends_on /ash/system/nearby_share/nearby_share_detailed_view_impl.h
//   - implements /ash/system/nearby_share/nearby_share_detailed_view.h
// ---

#include "ash/system/nearby_share/nearby_share_detailed_view.h"

#include "ash/system/nearby_share/nearby_share_detailed_view_impl.h"

namespace ash {

std::unique_ptr<NearbyShareDetailedView>
NearbyShareDetailedView::Factory::Create(
    DetailedViewDelegate* detailed_view_delegate) {
  return std::make_unique<NearbyShareDetailedViewImpl>(detailed_view_delegate);
}

}  // namespace ash
