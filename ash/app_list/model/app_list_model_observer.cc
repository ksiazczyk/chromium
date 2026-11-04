// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: App list model observer implementation
// summary: Implements the AppListModelObserver destructor, which checks that the observer is no longer registered in an observer list when it is destroyed.
// relations:
//   - implements /ash/app_list/model/app_list_model_observer.h
//   - depends_on /base/check.h
// ---

#include "ash/app_list/model/app_list_model_observer.h"

#include "base/check.h"

namespace ash {

AppListModelObserver::~AppListModelObserver() {
  CHECK(!IsInObserverList());
}

}  // namespace ash
