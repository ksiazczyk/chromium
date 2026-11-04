// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test TilePriority subclasses for soon, eventual, and now bins
// summary: Implements test TilePriority subclasses preset to the SOON, EVENTUALLY, and NOW bins for use in compositor tile tests.
// ---

#include "cc/test/test_tile_priorities.h"

namespace cc {

TilePriorityForSoonBin::TilePriorityForSoonBin()
    : TilePriority(HIGH_RESOLUTION, SOON, 300.0) {}

TilePriorityForEventualBin::TilePriorityForEventualBin()
    : TilePriority(HIGH_RESOLUTION, EVENTUALLY, 315.0) {}

TilePriorityForNowBin::TilePriorityForNowBin()
    : TilePriority(HIGH_RESOLUTION, NOW, 0) {}

}  // namespace cc
