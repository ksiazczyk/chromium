// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Stub obsolete system implementation
// summary: Provides a no-op ObsoleteSystem implementation for platforms without obsolete-system messaging, such as ChromeOS.
// ---

#include "chrome/browser/obsolete_system/obsolete_system.h"

namespace ObsoleteSystem {

bool IsObsoleteNowOrSoon() {
  return false;
}

std::u16string LocalizedObsoleteString() {
  return std::u16string();
}

bool IsEndOfTheLine() {
  return true;
}

const char* GetLinkURL() {
  return "";
}

}  // namespace ObsoleteSystem
