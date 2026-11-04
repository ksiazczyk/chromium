// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: App time notification delegate
// summary: Declares an interface that is notified when an application time limit is approaching so notifications can be shown.
// ---

#ifndef CHROME_BROWSER_ASH_CHILD_ACCOUNTS_TIME_LIMITS_APP_TIME_NOTIFICATION_DELEGATE_H_
#define CHROME_BROWSER_ASH_CHILD_ACCOUNTS_TIME_LIMITS_APP_TIME_NOTIFICATION_DELEGATE_H_

#include <optional>

namespace base {
class TimeDelta;
}  // namespace base

namespace ash::app_time {

class AppId;
enum class AppNotification;

// Called when the application time limit is reaching.
class AppTimeNotificationDelegate {
 public:
  AppTimeNotificationDelegate() = default;
  AppTimeNotificationDelegate(const AppTimeNotificationDelegate&) = delete;
  AppTimeNotificationDelegate& operator=(const AppTimeNotificationDelegate&) =
      delete;

  virtual ~AppTimeNotificationDelegate() = default;

  virtual void ShowAppTimeLimitNotification(
      const AppId& app_id,
      const std::optional<base::TimeDelta>& time_limit,
      AppNotification notification) = 0;
};

}  // namespace ash::app_time

#endif  // CHROME_BROWSER_ASH_CHILD_ACCOUNTS_TIME_LIMITS_APP_TIME_NOTIFICATION_DELEGATE_H_
