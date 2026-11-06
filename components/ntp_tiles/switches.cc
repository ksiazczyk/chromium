// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NTP tiles switch definitions
// summary: Defines the enable-ntp-search-engine-country-detection switch that enables country-specific popular sites on the NTP.
// ---

#include "components/ntp_tiles/switches.h"

namespace ntp_tiles {
namespace switches {

// Enables using the default search engine country to show country specific
// popular sites on the NTP.
const char kEnableNTPSearchEngineCountryDetection[] =
    "enable-ntp-search-engine-country-detection";

}  // namespace switches
}  // namespace ntp_tiles
