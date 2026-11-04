// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Media notification provider implementation
// summary: Implements global Get and Set accessors for the MediaNotificationProvider instance that bridges media notification info from browser to ash.
// relations:
//   - depends_on /ash/system/media/media_notification_provider.h
// ---

#include "ash/system/media/media_notification_provider.h"

namespace ash {

namespace {
MediaNotificationProvider* g_media_notification_provider = nullptr;
}  // namespace

// static
MediaNotificationProvider* MediaNotificationProvider::Get() {
  return g_media_notification_provider;
}

// static
void MediaNotificationProvider::Set(MediaNotificationProvider* provider) {
  g_media_notification_provider = provider;
}

}  // namespace ash
