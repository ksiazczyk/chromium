// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Share metrics implementation for desktop share logging
// summary: Implements UMA histogram and user metrics logging for desktop share events, recording which source launched a share.
// ---

#include "chrome/browser/share/share_metrics.h"

#include "base/metrics/histogram_macros.h"
#include "base/metrics/user_metrics.h"

namespace share {

const char kAnyShareStarted[] = "Sharing.AnyShareStartedDesktop";

void LogShareSourceDesktop(ShareSourceDesktop source) {
  UMA_HISTOGRAM_ENUMERATION(kAnyShareStarted, source);
}

}  // namespace share
