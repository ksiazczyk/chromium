// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shared HID constants for privileged FIDO extensions
// summary: Defines the fixed set of extension IDs that are allowed to bypass the HID blocklist to access FIDO security keys.
// ---

#ifndef CHROME_BROWSER_HID_HID_COMMON_H_
#define CHROME_BROWSER_HID_HID_COMMON_H_

#include <string_view>

#include "base/containers/fixed_flat_set.h"

// The set of extension IDs that are allowed to bypass the HID blocklist to
// access FIDO security keys.
inline constexpr auto kPrivilegedFidoExtensionIds =
    base::MakeFixedFlatSet<std::string_view>({
        // gnubbyd-v3 dev
        "ckcendljdlmgnhghiaomidhiiclmapok",
        // gnubbyd-v3 prod
        "lfboplenmmjcmpbkeemecobbadnmpfhi",
        // gnubbyd-v3 flywheel
        "gdmilihokhggmmlomocddffphkaikkke",
    });

#endif  // CHROME_BROWSER_HID_HID_COMMON_H_
