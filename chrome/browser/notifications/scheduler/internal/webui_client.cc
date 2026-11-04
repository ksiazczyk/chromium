// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebUI notification scheduler client implementation
// summary: Implements WebUIClient for the notification scheduler, forwarding notification data and stubbing most client callbacks as not implemented.
// ---

#include "chrome/browser/notifications/scheduler/internal/webui_client.h"

#include <utility>

#include "base/notimplemented.h"

namespace notifications {

WebUIClient::WebUIClient() = default;

WebUIClient::~WebUIClient() = default;

void WebUIClient::BeforeShowNotification(
    std::unique_ptr<NotificationData> notification_data,
    NotificationDataCallback callback) {
  std::move(callback).Run(std::move(notification_data));
}

void WebUIClient::OnShowNotification(
    std::unique_ptr<NotificationData> notification_data) {
  NOTIMPLEMENTED();
}

void WebUIClient::OnSchedulerInitialized(bool success,
                                         std::set<std::string> guids) {
  NOTIMPLEMENTED();
}

void WebUIClient::OnUserAction(const UserActionData& action_data) {
  NOTIMPLEMENTED();
}

void WebUIClient::GetThrottleConfig(ThrottleConfigCallback callback) {
  std::move(callback).Run(nullptr);
}

}  // namespace notifications
