// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NTP custom background preference key constants
// summary: Defines constant string keys for custom NTP background preference fields such as background URL, attribution lines, collection ID, resume token, and main color.
// ---

#ifndef COMPONENTS_THEMES_NTP_CUSTOM_BACKGROUND_SERVICE_CONSTANTS_H_
#define COMPONENTS_THEMES_NTP_CUSTOM_BACKGROUND_SERVICE_CONSTANTS_H_

inline constexpr char kNtpCustomBackgroundURL[] = "background_url";
inline constexpr char kNtpCustomBackgroundAttributionLine1[] =
    "attribution_line_1";
inline constexpr char kNtpCustomBackgroundAttributionLine2[] =
    "attribution_line_2";
inline constexpr char kNtpCustomBackgroundAttributionActionURL[] =
    "attribution_action_url";
inline constexpr char kNtpCustomBackgroundCollectionId[] = "collection_id";
inline constexpr char kNtpCustomBackgroundResumeToken[] = "resume_token";
inline constexpr char kNtpCustomBackgroundRefreshTimestamp[] =
    "refresh_timestamp";
inline constexpr char kNtpCustomBackgroundMainColor[] = "background_main_color";

#endif  // COMPONENTS_THEMES_NTP_CUSTOM_BACKGROUND_SERVICE_CONSTANTS_H_
