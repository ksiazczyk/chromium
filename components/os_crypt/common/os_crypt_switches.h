// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// ---docerion
// type: source
// title: OSCrypt command-line switches
// summary: Defines the use-mock-keychain command-line switch used for testing on Apple platforms without blocking dialogs.
// ---

#ifndef COMPONENTS_OS_CRYPT_COMMON_OS_CRYPT_SWITCHES_H_
#define COMPONENTS_OS_CRYPT_COMMON_OS_CRYPT_SWITCHES_H_

// Defines all the command-line switches used by the encryptor component.

#include "build/build_config.h"

namespace os_crypt::switches {

#if BUILDFLAG(IS_APPLE)

// Uses mock keychain for testing purposes, which prevents blocking dialogs
// from causing timeouts.
inline constexpr char kUseMockKeychain[] = "use-mock-keychain";

#endif  // BUILDFLAG(IS_APPLE)

}  // namespace os_crypt::switches

#endif  // COMPONENTS_OS_CRYPT_COMMON_OS_CRYPT_SWITCHES_H_
