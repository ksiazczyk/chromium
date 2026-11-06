// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast crash namespace constant definition
// summary: Defines the kCastNamespace constant used as the annotation namespace when uploading Cast crash data to the feedback service.
// ---

#include "chromecast/crash/fuchsia/constants.h"

namespace chromecast {
namespace crash {

// Namespace used when uploading annotations to the feedback service
// from Cast components.
const char kCastNamespace[] = "cast";

}  // namespace crash
}  // namespace chromecast
