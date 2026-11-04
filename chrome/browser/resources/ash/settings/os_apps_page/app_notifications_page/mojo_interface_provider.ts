// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mojo interface provider for app notifications
// summary: Provides a singleton AppNotificationsHandler Mojo remote for the page and allows tests to substitute a fake provider.
// ---

import type {AppNotificationsHandlerInterface} from '../../mojom-webui/app_notification_handler.mojom-webui.js';
import {AppNotificationsHandler} from '../../mojom-webui/app_notification_handler.mojom-webui.js';

let appNotificationProvider: AppNotificationsHandlerInterface|null = null;

export function setAppNotificationProviderForTesting(
    testProvider: AppNotificationsHandlerInterface): void {
  appNotificationProvider = testProvider;
}

export function getAppNotificationProvider(): AppNotificationsHandlerInterface {
  // For testing only.
  if (appNotificationProvider) {
    return appNotificationProvider;
  }
  appNotificationProvider = AppNotificationsHandler.getRemote();
  return appNotificationProvider;
}
