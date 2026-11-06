// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Histogram suffix constants
// summary: Defines shared histogram suffix strings distinguishing first versus subsequent navigations, new tab page origins and browser startup.
// ---

#include "components/page_load_metrics/google/browser/histogram_suffixes.h"

namespace internal {

const char kSuffixFirstNavigation[] = ".IsFirstNavigation";
const char kSuffixSubsequentNavigation[] = ".IsSubsequentNavigation";

const char kSuffixFromNewTabPage[] = ".FromNewTabPage";
const char kSuffixIsBrowserStarting[] = ".IsBrowserStarting";

}  // namespace internal
