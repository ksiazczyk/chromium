// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Security interstitials URL constants implementation
// summary: Defines constants for the connection-help WebUI host and the connection monitoring detected host used by security interstitial pages in the security_interstitials namespace.
// ---

#include "components/security_interstitials/content/urls.h"

namespace security_interstitials {

const char kChromeUIConnectionHelpHost[] = "connection-help";
const char kChromeUIConnectionHelpURL[] = "chrome://connection-help";

const char kChromeUIConnectionMonitoringDetectedHost[] =
    "connection-monitoring-detected";

}  // namespace security_interstitials
