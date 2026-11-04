// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default browser monitor stub
// summary: Stub implementation of DefaultBrowserMonitor::StartMonitor that does nothing on platforms without default browser change monitoring.
// ---

#include "chrome/browser/default_browser/default_browser_monitor.h"

namespace default_browser {

void DefaultBrowserMonitor::StartMonitor() {
  // Do nothing.
}

}  // namespace default_browser
