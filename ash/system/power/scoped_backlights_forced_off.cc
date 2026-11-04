// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScopedBacklightsForcedOff implementation
// summary: Implements the RAII wrapper whose destructor runs the unregister callback to release a forced-off backlight request.
// ---

#include "ash/system/power/scoped_backlights_forced_off.h"

#include <utility>

namespace ash {

ScopedBacklightsForcedOff::ScopedBacklightsForcedOff(
    base::OnceClosure unregister_callback)
    : unregister_callback_(std::move(unregister_callback)) {}

ScopedBacklightsForcedOff::~ScopedBacklightsForcedOff() {
  if (unregister_callback_)
    std::move(unregister_callback_).Run();
}

}  // namespace ash
