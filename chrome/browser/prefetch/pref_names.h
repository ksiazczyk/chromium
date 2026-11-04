// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Prefetch preference name declarations
// summary: Declares the prefetch preference path constants implemented in pref_names.cc for use across the browser.
// ---

#ifndef CHROME_BROWSER_PREFETCH_PREF_NAMES_H_
#define CHROME_BROWSER_PREFETCH_PREF_NAMES_H_

#include "chrome/common/pref_names.h"

namespace prefetch {
namespace prefs {

extern const char kCachePrefPath[];

extern const char kRetryAfterPrefPath[];

extern const char kNetworkPredictionOptions[];

}  // namespace prefs
}  // namespace prefetch

#endif  // CHROME_BROWSER_PREFETCH_PREF_NAMES_H_
