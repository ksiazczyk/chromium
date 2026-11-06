// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Test build updater constants
// summary: Defines the _test executable name suffix constant used when building the updater for test purposes.
// ---

#include "chrome/updater/constants.h"

namespace updater {

constexpr char kExecutableSuffix[] = "_test";

}  // namespace updater
