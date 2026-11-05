// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Empty announcement notification service implementation
// summary: Implements EmptyAnnouncementNotificationService, whose MaybeShowNotification method does nothing.
// ---

#include "chrome/browser/updates/announcement_notification/empty_announcement_notification_service.h"

EmptyAnnouncementNotificationService::EmptyAnnouncementNotificationService() =
    default;

EmptyAnnouncementNotificationService::~EmptyAnnouncementNotificationService() =
    default;

void EmptyAnnouncementNotificationService::MaybeShowNotification() {
  // Do nothing.
}
