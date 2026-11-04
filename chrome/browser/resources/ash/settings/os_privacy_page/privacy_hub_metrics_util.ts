// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Privacy hub geolocation metrics constants
// summary: Exports histogram names for geolocation access level changes made from settings, the dialog and location permission notifications.
// ---

export const LOCATION_PERMISSION_CHANGE_FROM_SETTINGS_HISTOGRAM_NAME =
    'ChromeOS.PrivacyHub.Geolocation.AccessLevelChanged.SystemSettings';
export const LOCATION_PERMISSION_CHANGE_FROM_DIALOG_HISTOGRAM_NAME =
    'ChromeOS.PrivacyHub.Geolocation.AccessLevelChanged.GeolocationDialog';
export const LOCATION_PERMISSION_CHANGE_FROM_NOTIFICATION_HISTOGRAM_NAME =
    'ChromeOS.PrivacyHub.Geolocation.AccessLevelChanged.' +
    'LocationPermissionNotification';
