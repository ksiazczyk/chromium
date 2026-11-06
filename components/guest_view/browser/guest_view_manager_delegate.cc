// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default GuestViewManagerDelegate implementation
// summary: Provides the default delegate whose guest availability and ownership checks all return false for builds without specialized support.
// ---

#include "components/guest_view/browser/guest_view_manager_delegate.h"

namespace guest_view {

GuestViewManagerDelegate::GuestViewManagerDelegate() {
}

GuestViewManagerDelegate::~GuestViewManagerDelegate() {
}

bool GuestViewManagerDelegate::IsGuestAvailableToContext(
    const GuestViewBase* guest) const {
  return false;
}

bool GuestViewManagerDelegate::IsOwnedByExtension(const GuestViewBase* guest) {
  return false;
}

bool GuestViewManagerDelegate::IsOwnedByControlledFrameEmbedder(
    const GuestViewBase* guest) {
  return false;
}

}  // namespace guest
