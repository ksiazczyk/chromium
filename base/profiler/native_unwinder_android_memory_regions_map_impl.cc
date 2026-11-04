// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Memory regions map implementation
// summary: Implements the constructor and destructor of the concrete memory regions map that owns libunwindstack maps and memory objects.
// ---

#include "base/profiler/native_unwinder_android_memory_regions_map_impl.h"

namespace base {
NativeUnwinderAndroidMemoryRegionsMapImpl::
    NativeUnwinderAndroidMemoryRegionsMapImpl(
        std::unique_ptr<unwindstack::Maps> maps,
        std::unique_ptr<unwindstack::Memory> memory)
    : maps_(std::move(maps)), memory_(std::move(memory)) {}

NativeUnwinderAndroidMemoryRegionsMapImpl::
    ~NativeUnwinderAndroidMemoryRegionsMapImpl() = default;
}  // namespace base
