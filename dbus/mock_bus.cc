// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockBus implementation
// summary: Implements the MockBus constructor and destructor for the gmock-based Bus test double.
// ---

#include "dbus/mock_bus.h"

#include <utility>

#include "base/location.h"

namespace dbus {

MockBus::MockBus(Bus::Options options) : Bus(std::move(options)) {}

MockBus::~MockBus() = default;

}  // namespace dbus
