// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: i18n command-line switch constants
// summary: Defines switch constants for forcing UI and text direction, namely force-ui-direction and force-text-direction with ltr and rtl values.
// ---

#include "base/i18n/base_i18n_switches.h"

namespace switches {

// Force the UI to a specific direction. Valid values are "ltr" (left-to-right)
// and "rtl" (right-to-left).
const char kForceUIDirection[] = "force-ui-direction";

// Force the text rendering to a specific direction. Valid values are "ltr"
// (left-to-right) and "rtl" (right-to-left). Only tested meaningfully with
// RTL.
const char kForceTextDirection[] = "force-text-direction";

const char kForceDirectionLTR[] = "ltr";
const char kForceDirectionRTL[] = "rtl";

}  // namespace switches
