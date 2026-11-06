// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Variations testing flag definition
// summary: Defines the command-line switch that appends variations headers to localhost requests for use in unit tests.
// ---

#include "components/variations/net/variations_flags.h"

namespace variations {

const char kAppendVariationsHeadersToLocalhostForTesting[] =
    "append-variations-headers-to-localhost-for-testing";

}  // namespace variations
