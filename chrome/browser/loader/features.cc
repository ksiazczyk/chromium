// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Feature flag for keeping the browser process alive for fetch keepalive
// summary: Defines the kKeepAliveBrowserProcessAlive feature, disabled by default, which keeps fetch keepalive and fetchLater requests alive after the last window closes.
// ---

#include "chrome/browser/loader/features.h"

namespace features {

// Keeps fetch keepalive / fetchLater requests alive after last-window close.
BASE_FEATURE(kKeepAliveBrowserProcessAlive, base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace features
