// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Site exclusion detail struct declaration
// summary: Declares a struct holding site exclusion checking counters and durations together with metric recording helpers.
// ---

#ifndef CHROME_BROWSER_CONTEXTUAL_TASKS_SITE_EXCLUSION_DETAIL_H_
#define CHROME_BROWSER_CONTEXTUAL_TASKS_SITE_EXCLUSION_DETAIL_H_

#include "base/time/time.h"

namespace contextual_tasks {

struct SiteExclusionDetail {
  int tabs_checked = 0;
  int tabs_filtered = 0;
  int exclusions_checked = 0;
  base::TimeDelta duration;

  void RecordActiveTabMetrics();
  void RecordAllTabsMetrics();
};

}  // namespace contextual_tasks

#endif  // CHROME_BROWSER_CONTEXTUAL_TASKS_SITE_EXCLUSION_DETAIL_H_
