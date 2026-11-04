// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Profile picker feature flag helpers
// summary: Helper functions that read loadTimeData booleans for profile picker flags such as profile creation, force signin, and refreshed UI.
// ---

import '/strings.m.js';

import {loadTimeData} from 'chrome://resources/js/load_time_data.js';

export function isProfileCreationAllowed(): boolean {
  return loadTimeData.getBoolean('isProfileCreationAllowed');
}

export function isBrowserSigninAllowed(): boolean {
  return loadTimeData.getBoolean('isBrowserSigninAllowed');
}

export function isForceSigninEnabled(): boolean {
  return loadTimeData.getBoolean('isForceSigninEnabled');
}

export function isSignInProfileCreationSupported(): boolean {
  return loadTimeData.getBoolean('signInProfileCreationFlowSupported');
}

export function isAskOnStartupAllowed(): boolean {
  return loadTimeData.getBoolean('isAskOnStartupAllowed');
}

export function isGlicVersion(): boolean {
  return loadTimeData.getBoolean('isGlicVersion');
}

export function isUseRefreshedUI(): boolean {
  return loadTimeData.getBoolean('useRefreshedUI');
}
