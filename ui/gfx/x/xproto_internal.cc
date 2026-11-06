// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Internal ref-counted memory wrappers for the X11 protocol
// summary: Implements ref-counted memory classes that own malloced data, view a subarray of other memory, or wrap unretained pointers for the X11 protocol code.
// ---

#include "ui/gfx/x/xproto_internal.h"

#include <stdint.h>
#include <xcb/xcb.h>
#include <xcb/xcbext.h>

#include "base/compiler_specific.h"

namespace x11 {

MallocedRefCountedMemory::MallocedRefCountedMemory(void* data)
    : data_(static_cast<uint8_t*>(data)) {}

MallocedRefCountedMemory::~MallocedRefCountedMemory() = default;

void* MallocedRefCountedMemory::data() {
  return data_.get();
}

const void* MallocedRefCountedMemory::data() const {
  return data_.get();
}

OffsetRefCountedMemory::OffsetRefCountedMemory(
    scoped_refptr<UnsizedRefCountedMemory> memory,
    size_t offset,
    size_t size)
    : memory_(memory), offset_(offset) {}

OffsetRefCountedMemory::~OffsetRefCountedMemory() = default;

void* OffsetRefCountedMemory::data() {
  return UNSAFE_TODO(memory_->bytes() + offset_);
}

const void* OffsetRefCountedMemory::data() const {
  return UNSAFE_TODO(memory_->bytes() + offset_);
}

UnretainedRefCountedMemory::UnretainedRefCountedMemory(void* data)
    : data_(data) {}

UnretainedRefCountedMemory::~UnretainedRefCountedMemory() = default;

void* UnretainedRefCountedMemory::data() {
  return data_;
}

const void* UnretainedRefCountedMemory::data() const {
  return data_;
}

}  // namespace x11
