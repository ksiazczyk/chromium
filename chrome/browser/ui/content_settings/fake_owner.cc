// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: FakeOwner implementation
// summary: Implements a fake ContentSettingBubbleModel owner that records the selected radio option and whether the bubble was closed, for use in tests.
// ---

#include "chrome/browser/ui/content_settings/fake_owner.h"

int FakeOwner::GetSelectedRadioOption() {
  return selected_radio_option_;
}

void FakeOwner::CloseBubble() {
  was_closed_ = true;
}
