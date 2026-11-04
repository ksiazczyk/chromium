// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fullscreen notification blocker header
// summary: Declares a notification blocker that suppresses popups in fullscreen mode, unused on ChromeOS where Ash has its own blocker.
// ---

#ifndef CHROME_BROWSER_NOTIFICATIONS_FULLSCREEN_NOTIFICATION_BLOCKER_H_
#define CHROME_BROWSER_NOTIFICATIONS_FULLSCREEN_NOTIFICATION_BLOCKER_H_

#include "base/timer/timer.h"
#include "ui/message_center/notification_blocker.h"

// A notification blocker which checks the fullscreen state. This is not used on
// ChromeOS as ash has its own fullscreen notification blocker.
class FullscreenNotificationBlocker
    : public message_center::NotificationBlocker {
 public:
  explicit FullscreenNotificationBlocker(
      message_center::MessageCenter* message_center);
  FullscreenNotificationBlocker(const FullscreenNotificationBlocker&) = delete;
  FullscreenNotificationBlocker& operator=(
      const FullscreenNotificationBlocker&) = delete;
  ~FullscreenNotificationBlocker() override;

  // message_center::NotificationBlocker overrides:
  void CheckState() override;
  bool ShouldShowNotificationAsPopup(
      const message_center::Notification& notification) const override;

 private:
  bool is_fullscreen_mode_;

  base::OneShotTimer timer_;
};

#endif  // CHROME_BROWSER_NOTIFICATIONS_FULLSCREEN_NOTIFICATION_BLOCKER_H_
