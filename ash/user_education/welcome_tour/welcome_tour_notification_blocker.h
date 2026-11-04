// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Welcome Tour notification blocker class declaration
// summary: Declares a notification blocker that prevents notifications and popups from showing while the Welcome Tour is active, with normal behavior restored on destruction.
// ---

#ifndef ASH_USER_EDUCATION_WELCOME_TOUR_WELCOME_TOUR_NOTIFICATION_BLOCKER_H_
#define ASH_USER_EDUCATION_WELCOME_TOUR_WELCOME_TOUR_NOTIFICATION_BLOCKER_H_

#include "ui/message_center/notification_blocker.h"

namespace ash {

// `WelcomeTourNotificationBlocker` blocks all notifications while it exists.
// When destroyed, assuming no other `message_center::NotificationBlocker`s
// interfere, notifications should appear in the Notification Center as normal,
// but no popups will be shown for notifications from before or during the tour,
// with the exception of system critical popups.
class WelcomeTourNotificationBlocker
    : public message_center::NotificationBlocker {
 public:
  WelcomeTourNotificationBlocker();
  WelcomeTourNotificationBlocker(const WelcomeTourNotificationBlocker&) =
      delete;
  WelcomeTourNotificationBlocker& operator=(
      const WelcomeTourNotificationBlocker&) = delete;
  ~WelcomeTourNotificationBlocker() override;

 private:
  // message_center::NotificationBlocker:
  bool ShouldShowNotification(
      const message_center::Notification& notification) const override;
  bool ShouldShowNotificationAsPopup(
      const message_center::Notification& notification) const override;
};

}  // namespace ash

#endif  // ASH_USER_EDUCATION_WELCOME_TOUR_WELCOME_TOUR_NOTIFICATION_BLOCKER_H_
