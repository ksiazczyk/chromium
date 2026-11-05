// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome ELF constants
// summary: Defines the WER helper DLL name and the browser extension point policy registry key name.
// ---

#include "chrome/chrome_elf/chrome_elf_constants.h"

const wchar_t kWerDll[] = L"chrome_wer.dll";

namespace elf_sec {

const wchar_t kRegBrowserExtensionPointKeyName[] =
    L"\\BrowserExtensionPointPolicy";

}  // namespace elf_sec
