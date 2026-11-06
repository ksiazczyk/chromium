// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Reauthentication event enum for logging
// summary: Defines the ReauthenticationEvent enum used for logging attempts, successes, failures, and passcode-related actions.
// ---

#ifndef IOS_CHROME_COMMON_UI_REAUTHENTICATION_REAUTHENTICATION_EVENT_H_
#define IOS_CHROME_COMMON_UI_REAUTHENTICATION_REAUTHENTICATION_EVENT_H_

// These values are persisted to logs. Entries should not be renumbered and
// numeric values should never be reused.
// Must be in sync with ReauthenticationEvent enum in
// tools/metrics/histograms/enums.xml.
// LINT.IfChange
enum class ReauthenticationEvent {
  kAttempt = 0,
  kSuccess = 1,
  kFailure = 2,
  kMissingPasscode = 3,
  kOpenPasscodeSettings = 4,
  kMaxValue = kOpenPasscodeSettings,
};
// LINT.ThenChange(tools/metrics/histograms/enums.xml:ReauthenticationEvent)

#endif  // IOS_CHROME_COMMON_UI_REAUTHENTICATION_REAUTHENTICATION_EVENT_H_
