// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Profile metrics preference name declarations
// summary: Declares the profile preference name constants used by per-user metrics state handling.
// ---

#ifndef CHROME_BROWSER_METRICS_PROFILE_PREF_NAMES_H_
#define CHROME_BROWSER_METRICS_PROFILE_PREF_NAMES_H_

namespace metrics {
namespace prefs {

// Alphabetical list of profile preference names. Document each in the .cc file.
extern const char kMetricsRequiresClientIdResetOnConsent[];
extern const char kMetricsUserConsent[];
extern const char kMetricsUserId[];
extern const char kMetricsUserMetricLogs[];
extern const char kMetricsUserMetricLogsMetadata[];

}  // namespace prefs
}  // namespace metrics

#endif  // CHROME_BROWSER_METRICS_PROFILE_PREF_NAMES_H_
