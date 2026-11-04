// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock memory pressure listener implementation
// summary: Implements GoogleMock memory pressure listener classes, including variants that auto-register with the global registry for use in tests.
// ---

#include "base/memory/mock_memory_pressure_listener.h"

namespace base {

MockMemoryPressureListener::MockMemoryPressureListener() = default;

MockMemoryPressureListener::~MockMemoryPressureListener() = default;

RegisteredMockMemoryPressureListener::RegisteredMockMemoryPressureListener()
    : registration_(MemoryPressureListenerTag::kTest, this) {}

RegisteredMockMemoryPressureListener::~RegisteredMockMemoryPressureListener() =
    default;

RegisteredMockAsyncMemoryPressureListener::
    RegisteredMockAsyncMemoryPressureListener()
    : registration_(FROM_HERE, MemoryPressureListenerTag::kTest, this) {}

RegisteredMockAsyncMemoryPressureListener::
    ~RegisteredMockAsyncMemoryPressureListener() = default;

}  // namespace base
