// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: History clusters URL constants
// summary: Defines a helper function that returns the address of the grouped history page used by the history clusters feature.
// ---

#include "components/history_clusters/core/url_constants.h"
#include "base/feature_list.h"
#include "components/history_clusters/core/features.h"

namespace history_clusters {

const char* GetChromeUIHistoryClustersURL() {
  return "chrome://history/grouped";
}

}  // namespace history_clusters
