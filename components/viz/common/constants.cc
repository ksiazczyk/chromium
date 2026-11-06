// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Viz common constant definitions
// summary: Defines shared viz constants such as the default activation deadline in frames and the maximum time until the next throttling glitch.
// ---

#include "components/viz/common/constants.h"

namespace viz {

const uint32_t kDefaultActivationDeadlineInFrames = 4u;
const base::TimeDelta kMaxTimeUntilNextGlitch = base::Seconds(3);

}  // namespace viz
