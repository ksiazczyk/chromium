// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert search debouncer class declaration
// summary: Declares the QuickInsertSearchDebouncer, which delays search requests and reports whether a search is pending.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /base/functional/callback_forward.h
//   - depends_on /base/time/time.h
// ---

#ifndef ASH_QUICK_INSERT_SEARCH_QUICK_INSERT_SEARCH_DEBOUNCER_H_
#define ASH_QUICK_INSERT_SEARCH_QUICK_INSERT_SEARCH_DEBOUNCER_H_

#include "ash/ash_export.h"
#include "base/functional/callback_forward.h"
#include "base/time/time.h"
#include "base/timer/timer.h"

namespace ash {

class ASH_EXPORT QuickInsertSearchDebouncer {
 public:
  explicit QuickInsertSearchDebouncer(base::TimeDelta delay);

  // Request to call `search` if there are no other calls to `RequestSearch`
  // within the delay specified in the constructor.
  void RequestSearch(base::OnceClosure search);

  bool IsSearchPending();

 private:
  base::TimeDelta delay_;
  base::OneShotTimer timer_;
};

}  // namespace ash

#endif  // ASH_QUICK_INSERT_SEARCH_QUICK_INSERT_SEARCH_DEBOUNCER_H_
