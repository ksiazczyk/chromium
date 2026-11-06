// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SoftNavigationData implementation
// summary: Implements SoftNavigationData construction and RecordFirstBackgroundTime, which stores only the first backgrounding timestamp of a soft navigation.
// ---

#include "components/page_load_metrics/browser/soft_navigation_data.h"

namespace page_load_metrics {

SoftNavigationData::SoftNavigationData() = default;
SoftNavigationData::~SoftNavigationData() = default;

void SoftNavigationData::RecordFirstBackgroundTime(
    base::TimeDelta background_time) {
  if (!first_background_time.has_value()) {
    first_background_time = background_time;
  }
}

}  // namespace page_load_metrics
