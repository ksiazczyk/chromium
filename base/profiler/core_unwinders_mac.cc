// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: macOS core unwinders factory
// summary: Creates the macOS stack sampling unwinder list built around a frame pointer unwinder.
// ---

#include "base/profiler/core_unwinders.h"

#include <memory>
#include <vector>

#include "base/functional/bind.h"
#include "base/profiler/frame_pointer_unwinder.h"

namespace base {

StackSamplingProfiler::UnwindersFactory CreateCoreUnwindersFactory() {
  return BindOnce([] {
    std::vector<std::unique_ptr<Unwinder>> unwinders;
    unwinders.push_back(std::make_unique<FramePointerUnwinder>());
    return unwinders;
  });
}

}  // namespace base
