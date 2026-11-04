// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake detailed view delegate implementation
// summary: Implements a fake DetailedViewDelegate that counts CloseBubble calls, for use in tests.
// ---

#include "ash/system/tray/fake_detailed_view_delegate.h"

namespace ash {

FakeDetailedViewDelegate::FakeDetailedViewDelegate()
    : DetailedViewDelegate(/*tray_controller=*/nullptr) {}

FakeDetailedViewDelegate::~FakeDetailedViewDelegate() = default;

void FakeDetailedViewDelegate::CloseBubble() {
  close_bubble_call_count_++;
}

}  // namespace ash