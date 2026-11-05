// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Battery saver bubble delegate implementation
// summary: Implements the delegate for the battery saver bubble dialog, handling window closing and session-off clicks and recording bubble actions.
// ---

#include "chrome/browser/ui/performance_controls/battery_saver_bubble_delegate.h"

#include "chrome/browser/performance_manager/public/user_tuning/battery_saver_mode_manager.h"
#include "chrome/browser/ui/chrome_pages.h"
#include "chrome/browser/ui/performance_controls/battery_saver_bubble_observer.h"
#include "chrome/common/webui_url_constants.h"

BatterySaverBubbleDelegate::BatterySaverBubbleDelegate(
    BatterySaverBubbleObserver* observer)
    : observer_(observer) {
  CHECK(observer, base::NotFatalUntil::M162);
}

void BatterySaverBubbleDelegate::OnWindowClosing() {
  observer_->OnBubbleHidden();
  RecordBatterySaverBubbleAction(action_type_);
}

void BatterySaverBubbleDelegate::OnSessionOffClicked() {
  action_type_ = BatterySaverBubbleActionType::kTurnOffNow;
  auto* manager =
      performance_manager::user_tuning::BatterySaverModeManager::GetInstance();
  manager->SetTemporaryBatterySaverDisabledForSession(true);
}
