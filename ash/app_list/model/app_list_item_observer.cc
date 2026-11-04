// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: App list item observer implementation
// summary: Implements the AppListItemObserver destructor that checks the observer is no longer in an observer list.
// relations:
//   - implements /ash/app_list/model/app_list_item_observer.h
//   - depends_on /base/check.h
// ---

#include "ash/app_list/model/app_list_item_observer.h"

#include "base/check.h"

namespace ash {

AppListItemObserver::~AppListItemObserver() {
  CHECK(!IsInObserverList());
}

}  // namespace ash
