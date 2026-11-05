// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome ELF early browser security header
// summary: Declares the elf_security functions for early browser security, extension-point disable state, and test validation controls.
// ---

#ifndef CHROME_CHROME_ELF_CHROME_ELF_SECURITY_H_
#define CHROME_CHROME_ELF_CHROME_ELF_SECURITY_H_

namespace elf_security {

// Setup any early browser-process security.
void EarlyBrowserSecurity();

// Returns whether we set the Extension Point Disable mitigation during early
// browser security.
bool IsExtensionPointDisableSet();

// Turns on or off the validate function for testing purposes.
void ValidateExeForTesting(bool on);

}  // namespace elf_security

#endif  // CHROME_CHROME_ELF_CHROME_ELF_SECURITY_H_
