// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: InfobarBadgeTabHelperObserver interface
// summary: Declares a CheckedObserver interface notified when the set of shown infobar badges is updated.
// ---

#ifndef IOS_CHROME_BROWSER_INFOBARS_MODEL_INFOBAR_BADGE_TAB_HELPER_OBSERVER_H_
#define IOS_CHROME_BROWSER_INFOBARS_MODEL_INFOBAR_BADGE_TAB_HELPER_OBSERVER_H_

#include "base/observer_list_types.h"

class InfobarBadgeTabHelper;

// Observer to get notified of updates to the set of shown Infobar badges.
class InfobarBadgeTabHelperObserver : public base::CheckedObserver {
 public:
  // The given InfobarBadgeTabHelper has an update to the infobar badges.
  virtual void InfobarBadgesUpdated(InfobarBadgeTabHelper* tab_helper) {}
};

#endif  // IOS_CHROME_BROWSER_INFOBARS_MODEL_INFOBAR_BADGE_TAB_HELPER_OBSERVER_H_
