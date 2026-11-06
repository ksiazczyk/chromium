// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast network command-line switches
// summary: Defines command-line switch names for the connectivity check URL and the list of network interfaces to ignore.
// ---

#include "chromecast/net/net_switches.h"

namespace switches {

// Url for network connectivity checking. Default is
// "https://clients3.google.com/generate_204".
const char kConnectivityCheckUrl[] = "connectivity-check-url";

// List of network interfaces to ignore. Ignored interfaces will not be used
// for network connectivity.
const char kNetifsToIgnore[] = "netifs-to-ignore";

}  // namespace switches
