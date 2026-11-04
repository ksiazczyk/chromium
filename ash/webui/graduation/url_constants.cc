// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Graduation WebUI URL constants
// summary: Defines constant strings for the graduation WebUI app host and the Google Takeout transfer endpoint bases used by the feature.
// ---

#include "ash/webui/graduation/url_constants.h"

namespace ash::graduation {

const char kChromeUIGraduationAppHost[] = "graduation";
const char kChromeUIGraduationAppURL[] = "chrome://graduation";
const char kEmbeddedTransferURLBase[] =
    "https://takeout.google.com/embedded/transfer";
const char kTransferURLBase[] = "https://takeout.google.com/transfer";

}  // namespace ash::graduation
