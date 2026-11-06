// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TileSource alias header
// summary: Aliases the ntp_tiles TileSource type to the Mojom TileSource enum describing where an NTP tile originates.
// ---

#ifndef COMPONENTS_NTP_TILES_TILE_SOURCE_H_
#define COMPONENTS_NTP_TILES_TILE_SOURCE_H_

#include "components/ntp_tiles/tile_source.mojom.h"

namespace ntp_tiles {

// The source of an NTP tile.
using TileSource = mojom::TileSource;

}  // namespace ntp_tiles

#endif  // COMPONENTS_NTP_TILES_TILE_SOURCE_H_
