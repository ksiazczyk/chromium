// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Feed activity bucket utility header
// summary: Declares FeedActivityBucketForPrefs, which reads the feed activity bucket from preferences.
// ---

#ifndef IOS_CHROME_BROWSER_NTP_SHARED_METRICS_FEED_METRICS_UTILS_H_
#define IOS_CHROME_BROWSER_NTP_SHARED_METRICS_FEED_METRICS_UTILS_H_

enum class FeedActivityBucket;
class PrefService;

// Returns the activity bucket from `prefs`.
FeedActivityBucket FeedActivityBucketForPrefs(PrefService* prefs);

#endif  // IOS_CHROME_BROWSER_NTP_SHARED_METRICS_FEED_METRICS_UTILS_H_
