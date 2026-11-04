// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header declaring the keepalive browser process feature
// summary: Declares the kKeepAliveBrowserProcessAlive base feature used by the Chrome browser loader.
// ---

#ifndef CHROME_BROWSER_LOADER_FEATURES_H_
#define CHROME_BROWSER_LOADER_FEATURES_H_

#include "base/feature_list.h"

namespace features {

BASE_DECLARE_FEATURE(kKeepAliveBrowserProcessAlive);

}  // namespace features

#endif  // CHROME_BROWSER_LOADER_FEATURES_H_
