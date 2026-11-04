// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Borealis command-line switches
// summary: Defines the borealis-launch-options switch used to pass a BorealisLaunchOptions string to the Chrome process.
// ---

#include "chrome/browser/ash/borealis/borealis_switches.h"

namespace borealis {
namespace switches {

// Allows passing a BorealisLaunchOptions string to the chrome process, which
// will be stored in the kExtraLaunchOptions. For the format, see the
// documentation in chrome/browser/ash/borealis/borealis_launch_options.h.
const char kLaunchOptions[] = "borealis-launch-options";

}  // namespace switches
}  // namespace borealis
