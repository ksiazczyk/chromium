// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SearchPreloadSignalResult enum for preload trigger outcomes
// summary: Defines an enum recording whether a search preload was triggered and the reasons it was not, kept in sync with the omnibox histograms metadata.
// ---

#ifndef CHROME_BROWSER_PRELOADING_SEARCH_PRELOAD_SEARCH_PRELOAD_SIGNAL_RESULT_H_
#define CHROME_BROWSER_PRELOADING_SEARCH_PRELOAD_SEARCH_PRELOAD_SIGNAL_RESULT_H_

// Measures the difference between "the client judged it should preload" and
// "preload is actually triggered".
//
// The naming rule is `<Result><Mode>?<Reason>?`. For example,
// `kNotTriggeredOnPressNoSearchProviderOptIn` consists of
// `<Result> = NotTriggered, <Mode> = OnPress, <Reason> =
// NoSearchProviderOptIn`.
//
// LINT.IfChange
enum class SearchPreloadSignalResult {
  // Not interested to record.
  kNotTriggeredMisc = 0,

  // Prefetch/prerender is triggered by the signal.
  kPrefetchTriggered = 1,
  kPrerenderTriggered = 2,

  // Not triggered

  // A preload was already triggered by a signal.
  kNotTriggeredAlreadyTriggered = 3,
  // Tried to trigger prerender, but prefetch is not alive.
  kNotTriggeredPrefetchNotAlive = 4,
  // Limit exceeded.
  kNotTriggeredLimitExceeded = 5,
  // The profile is Incognito.
  kNotTriggeredIncognito = 6,
  // The pressed item is not search type.
  kNotTriggeredOnPressNotSearchType = 7,
  // No opt-in of the search provider.
  kNotTriggeredOnPressNoSearchProviderOptIn = 8,
  // Preloads are throttled during prewarm requests.
  kNotTriggeredThrottledByPrewarm = 9,
  // Search mode is unsupported (e.g. udm=50 or AIM suggestion).
  kNotTriggeredUnsupportedSearchMode = 10,

  // The max value of the PrefetchStatus. Update this when new enums are added.
  kMaxValue = kNotTriggeredUnsupportedSearchMode,
};
// LINT.ThenChange(/tools/metrics/histograms/metadata/omnibox/enums.xml:SearchPreloadSignalResult)

#endif  // CHROME_BROWSER_PRELOADING_SEARCH_PRELOAD_SEARCH_PRELOAD_SIGNAL_RESULT_H_
