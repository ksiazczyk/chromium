// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android status tray stub
// summary: Provides the Android StatusTray::Create factory that is currently unimplemented and returns null.
// ---

#include "chrome/browser/status_icons/status_tray.h"

#include "base/notimplemented.h"

std::unique_ptr<StatusTray> StatusTray::Create() {
  NOTIMPLEMENTED();
  return NULL;
}
