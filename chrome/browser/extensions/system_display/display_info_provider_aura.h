// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Aura DisplayInfoProvider class header
// summary: Declares DisplayInfoProviderAura derived from DisplayInfoProviderBase.
// ---

#ifndef CHROME_BROWSER_EXTENSIONS_SYSTEM_DISPLAY_DISPLAY_INFO_PROVIDER_AURA_H_
#define CHROME_BROWSER_EXTENSIONS_SYSTEM_DISPLAY_DISPLAY_INFO_PROVIDER_AURA_H_

#include "extensions/browser/display_info_provider_base.h"

namespace extensions {

class DisplayInfoProviderAura : public DisplayInfoProviderBase {
 public:
  DisplayInfoProviderAura();

  DisplayInfoProviderAura(const DisplayInfoProviderAura&) = delete;
  DisplayInfoProviderAura& operator=(const DisplayInfoProviderAura&) = delete;
};

}  // namespace extensions

#endif  // CHROME_BROWSER_EXTENSIONS_SYSTEM_DISPLAY_DISPLAY_INFO_PROVIDER_AURA_H_
