// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake notification interaction handler implementation
// summary: Implements a fake NotificationInteractionHandler that counts handled notification clicks and registered click handlers for tests.
// ---

#include "chromeos/ash/components/phonehub/fake_notification_interaction_handler.h"

#include "chromeos/ash/components/phonehub/notification.h"

namespace ash::phonehub {

FakeNotificationInteractionHandler::FakeNotificationInteractionHandler() =
    default;

FakeNotificationInteractionHandler::~FakeNotificationInteractionHandler() =
    default;

void FakeNotificationInteractionHandler::HandleNotificationClicked(
    int64_t notification_id,
    const Notification::AppMetadata& app_metadata) {
  handled_notification_count_++;
}

void FakeNotificationInteractionHandler::AddNotificationClickHandler(
    NotificationClickHandler* handler) {
  notification_click_handler_count_++;
}

void FakeNotificationInteractionHandler::RemoveNotificationClickHandler(
    NotificationClickHandler* handler) {
  notification_click_handler_count_--;
}

}  // namespace ash::phonehub
