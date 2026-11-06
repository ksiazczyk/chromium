// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake active display monitor
// summary: Provides a fake ActiveDisplayMonitor that fires the callback with a configured display for use in tests.
// ---

#include "remoting/host/fake_active_display_monitor.h"

namespace remoting {

FakeActiveDisplayMonitor::FakeActiveDisplayMonitor(
    ActiveDisplayMonitor::Callback callback)
    : callback_(callback) {}

FakeActiveDisplayMonitor::~FakeActiveDisplayMonitor() = default;

base::WeakPtr<FakeActiveDisplayMonitor> FakeActiveDisplayMonitor::GetWeakPtr() {
  return weak_factory_.GetWeakPtr();
}

void FakeActiveDisplayMonitor::SetActiveDisplay(webrtc::ScreenId display) {
  callback_.Run(display);
}

}  // namespace remoting
