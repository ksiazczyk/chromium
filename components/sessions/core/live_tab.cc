// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LiveTab implementation
// summary: Implements the LiveTab destructor and a default platform-specific tab data accessor returning null.
// ---

#include "components/sessions/core/live_tab.h"

namespace sessions {

LiveTab::~LiveTab() = default;

std::unique_ptr<tab_restore::PlatformSpecificTabData>
LiveTab::GetPlatformSpecificTabData() {
  return nullptr;
}

}  // namespace sessions
