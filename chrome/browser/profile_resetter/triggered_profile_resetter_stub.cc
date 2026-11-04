// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Triggered profile resetter stub implementation
// summary: No-op Activate implementation of TriggeredProfileResetter used on platforms without triggered reset support.
// ---

#include "chrome/browser/profile_resetter/triggered_profile_resetter.h"

void TriggeredProfileResetter::Activate() {
  activate_called_ = true;
}
