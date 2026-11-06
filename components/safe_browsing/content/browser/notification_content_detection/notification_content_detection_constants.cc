// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Notification content detection constant definitions
// summary: Defines constant strings for the suspicious verdict label, histogram names, website setting keys, and metadata dictionary keys.
// ---

#include "components/safe_browsing/content/browser/notification_content_detection/notification_content_detection_constants.h"

namespace safe_browsing {

const char kSuspiciousVerdictLabel[] = "suspicious";

const char kAllowlistCheckLatencyHistogram[] =
    "SafeBrowsing.NotificationContentDetection.AllowlistCheckLatency";
const char kSuspiciousScoreHistogram[] =
    "SafeBrowsing.NotificationContentDetection.SuspiciousScore";

const char kIsAllowlistedByUserKey[] = "is-allowlisted-by-user";

const char kSuspiciousNotificationIdsKey[] = "suspicious-notification-ids";

const char kSuspiciousNotificationShowOriginalKey[] =
    "suspicious-notification-show-original";

const char kNotificationContentDetectionMetadataDictionaryKey[] =
    "content-detection";
const char kMetadataSuspiciousScoreKey[] = "suspicious-score";
const char kMetadataIsOriginOnGlobalCacheListKey[] =
    "is-origin-on-global-cache-list";
const char kMetadataIsOriginAllowlistedByUserKey[] =
    "is-origin-allowlisted-by-user";

}  // namespace safe_browsing
