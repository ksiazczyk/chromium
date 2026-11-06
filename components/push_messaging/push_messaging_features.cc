// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Push messaging feature flag definitions
// summary: Defines base::Feature flags for push messaging, including disallowing GCM sender IDs, subscriptions with expiration times, and Webpush-based GCM endpoints.
// ---

#include "components/push_messaging/push_messaging_features.h"

#include "components/push_messaging/push_messaging_constants.h"

namespace features {

BASE_FEATURE(kPushMessagingDisallowSenderIDs,
             base::FEATURE_DISABLED_BY_DEFAULT);

BASE_FEATURE(kPushSubscriptionWithExpirationTime,
             base::FEATURE_DISABLED_BY_DEFAULT);

BASE_FEATURE(kPushMessagingGcmEndpointWebpushPath,
             base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace features
