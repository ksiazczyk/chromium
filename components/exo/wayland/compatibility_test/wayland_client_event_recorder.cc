// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: EventRecorder implementation
// summary: Implements the constructor and destructor of the EventRecorder helper used to record Wayland client events during compatibility tests.
// ---

#include "components/exo/wayland/compatibility_test/wayland_client_event_recorder.h"

namespace exo {
namespace wayland {
namespace compatibility {
namespace test {

EventRecorder::EventRecorder() = default;
EventRecorder::~EventRecorder() = default;

}  // namespace test
}  // namespace compatibility
}  // namespace wayland
}  // namespace exo
