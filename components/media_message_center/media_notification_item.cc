// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MediaNotificationItem histogram constants
// summary: Defines the histogram name constants for user actions, Cast user actions, and source metrics recorded by MediaNotificationItem.
// ---

#include "components/media_message_center/media_notification_item.h"

namespace media_message_center {

// static
const char MediaNotificationItem::kUserActionHistogramName[] =
    "Media.Notification.UserAction";

// static
const char MediaNotificationItem::kCastUserActionHistogramName[] =
    "Media.Notification.Cast.UserAction";

// static
const char MediaNotificationItem::kSourceHistogramName[] =
    "Media.Notification.Source";

}  // namespace media_message_center
