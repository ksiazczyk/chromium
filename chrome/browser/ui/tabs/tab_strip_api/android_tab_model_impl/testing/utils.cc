// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Testing helper to get a TabModel for a profile
// summary: Implements tabs_api::testing::GetTabModel, which returns the TabModel matching a given profile and crashes when no matching model is found.
// ---

#include "base/check_deref.h"
#include "chrome/browser/ui/android/tab_model/tab_model.h"
#include "chrome/browser/ui/android/tab_model/tab_model_list.h"

namespace tabs_api::testing {

TabModel& GetTabModel(Profile* profile) {
  for (TabModel* model : TabModelList::models()) {
    if (model->GetProfile() == profile) {
      return *model;
    }
  }
  NOTREACHED() << "could not find a tab model to construct the api with";
}

}  // namespace tabs_api::testing
