// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Blink input feature definitions
// summary: Defines the kDontSendKeyEventsToJavascript base feature, which is disabled by default.
// ---

#include "ui/events/blink/blink_features.h"

namespace features {

BASE_FEATURE(kDontSendKeyEventsToJavascript, base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace features
