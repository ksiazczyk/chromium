// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Connectivity check URL constant
// summary: Defines the gstatic connectivity check URL used by the Safety Check update check.
// ---

#include "components/safety_check/url_constants.h"

namespace safety_check {

const char kConnectivityCheckUrl[] =
    "https://connectivitycheck.gstatic.com/generate_204";

}  // namespace safety_check
