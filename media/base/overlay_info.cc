// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OverlayInfo implementation
// summary: Implements OverlayInfo helpers that check for a valid routing token and compare whether two overlay infos refer to the same overlay.
// ---

#include "media/base/overlay_info.h"

namespace media {

OverlayInfo::OverlayInfo() = default;
OverlayInfo::OverlayInfo(const OverlayInfo&) = default;
OverlayInfo& OverlayInfo::operator=(const OverlayInfo&) = default;

bool OverlayInfo::HasValidRoutingToken() const {
  return routing_token.has_value();
}

bool OverlayInfo::RefersToSameOverlayAs(const OverlayInfo& other) {
  return routing_token == other.routing_token;
}

}  // namespace media
