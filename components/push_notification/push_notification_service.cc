// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Push notification service implementation
// summary: Implements the base PushNotificationService, which owns and exposes a PushNotificationClientManager instance.
// ---

#include "components/push_notification/push_notification_service.h"

namespace push_notification {

PushNotificationService::PushNotificationService()
    : client_manager_(std::make_unique<PushNotificationClientManager>()) {}

PushNotificationService::~PushNotificationService() = default;

PushNotificationClientManager*
PushNotificationService::GetPushNotificationClientManager() {
  return client_manager_.get();
}

}  // namespace push_notification
