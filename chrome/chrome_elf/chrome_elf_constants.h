// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// A handful of resource-like constants related to the ChromeELF.

// ---docerion
// type: source
// title: Chrome ELF constants header
// summary: Declares resource-like constants for Chrome ELF, including the WER helper DLL name and the registry key controlling the browser extension-point mitigation.
// ---

#ifndef CHROME_CHROME_ELF_CHROME_ELF_CONSTANTS_H_
#define CHROME_CHROME_ELF_CHROME_ELF_CONSTANTS_H_

// Needed to register the WER helper DLL.
extern const wchar_t kWerDll[];

namespace elf_sec {

// The name of the registry key which controls the enablement of
// sandbox::MITIGATION_EXTENSION_POINT_DISABLE for the browser process.
extern const wchar_t kRegBrowserExtensionPointKeyName[];

}  // namespace elf_sec

#endif  // CHROME_CHROME_ELF_CHROME_ELF_CONSTANTS_H_
