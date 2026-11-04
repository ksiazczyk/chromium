// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Notification display service implementation
// summary: Provides the destructors for the NotificationDisplayService class and its Observer base class.
// ---

#include "chrome/browser/notifications/notification_display_service.h"

NotificationDisplayService::Observer::~Observer() = default;

NotificationDisplayService::~NotificationDisplayService() = default;
