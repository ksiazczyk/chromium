// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Frame class implementation
// summary: Implements the Frame constructors and destructor for a sampled stack frame holding an instruction pointer and module information.
// ---

#include "base/profiler/frame.h"

namespace base {

Frame::Frame(uintptr_t instruction_pointer, const ModuleCache::Module* module)
    : instruction_pointer(instruction_pointer), module(module) {}

Frame::Frame(uintptr_t instruction_pointer,
             const ModuleCache::Module* module,
             std::string function_name)
    : instruction_pointer(instruction_pointer),
      module(module),
      function_name(std::move(function_name)) {}

Frame::~Frame() = default;

}  // namespace base
