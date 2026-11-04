// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert search debouncer implementation
// summary: Implements the search debouncer, using a one-shot timer to run a search callback only after the configured delay elapses.
// relations:
//   - implements /ash/quick_insert/search/quick_insert_search_debouncer.h
//   - depends_on /base/time/time.h
//   - depends_on /base/timer/timer.h
// ---

#include "ash/quick_insert/search/quick_insert_search_debouncer.h"

#include <utility>

#include "base/location.h"
#include "base/time/time.h"
#include "base/timer/timer.h"

namespace ash {

QuickInsertSearchDebouncer::QuickInsertSearchDebouncer(base::TimeDelta delay)
    : delay_(std::move(delay)) {}

void QuickInsertSearchDebouncer::RequestSearch(base::OnceClosure search) {
  timer_.Start(FROM_HERE, delay_, std::move(search));
}

bool QuickInsertSearchDebouncer::IsSearchPending() {
  return timer_.IsRunning();
}

}  // namespace ash
