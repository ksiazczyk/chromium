// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CryptohomeKeyDelegate D-Bus service constants
// summary: Defines the D-Bus service name and object path for the Chrome-run CryptohomeKeyDelegate service.
// ---

#include "chromeos/ash/components/dbus/constants/cryptohome_key_delegate_constants.h"

namespace cryptohome {

const char kCryptohomeKeyDelegateServiceName[] =
    "org.chromium.CryptohomeKeyDelegate";
const char kCryptohomeKeyDelegateServicePath[] =
    "/org/chromium/CryptohomeKeyDelegate";

}  // namespace cryptohome
