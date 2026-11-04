// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Unwinder base class implementation for stack sampling
// summary: Implements the Unwinder base class, initializing the module cache and providing a default null unwinder state capture.
// ---

#include "base/profiler/unwinder.h"

namespace base {

UnwinderStateCapture::~UnwinderStateCapture() = default;

void Unwinder::Initialize(ModuleCache* module_cache) {
  module_cache_ = module_cache;
  InitializeModules();
}

std::unique_ptr<UnwinderStateCapture> Unwinder::CreateUnwinderStateCapture() {
  return nullptr;
}

}  // namespace base
