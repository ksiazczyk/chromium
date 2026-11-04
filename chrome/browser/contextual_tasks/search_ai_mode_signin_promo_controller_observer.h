// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Search AI mode sign-in promo controller observer
// summary: Observer interface that is notified when the search AI mode sign-in flow is aborted.
// ---

#ifndef CHROME_BROWSER_CONTEXTUAL_TASKS_SEARCH_AI_MODE_SIGNIN_PROMO_CONTROLLER_OBSERVER_H_
#define CHROME_BROWSER_CONTEXTUAL_TASKS_SEARCH_AI_MODE_SIGNIN_PROMO_CONTROLLER_OBSERVER_H_

#include "base/observer_list_types.h"

namespace contextual_tasks {

class SearchAIModeSignInPromoControllerObserver : public base::CheckedObserver {
 public:
  // Called when the sign-in flow is aborted.
  virtual void OnFlowAborted() {}
};

}  // namespace contextual_tasks

#endif  // CHROME_BROWSER_CONTEXTUAL_TASKS_SEARCH_AI_MODE_SIGNIN_PROMO_CONTROLLER_OBSERVER_H_
