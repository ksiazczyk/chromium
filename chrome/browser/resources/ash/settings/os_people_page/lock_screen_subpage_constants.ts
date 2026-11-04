// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lock screen subpage constants
// summary: Exports the allowed local auth factors pref name and the AllowedLocalAuthFactors enum values used by lock screen settings.
// ---

export const AllowedLocalAuthFactorsPref =
    'ash.local_auth_factors.enabled_factors';

/**
 * Possible values for `AllowedLocalAuthFactors`.
 */
export enum AllowedLocalAuthFactors {
  ALL = 'ALL',
  LOCAL_PASSWORD = 'LOCAL_PASSWORD',
  PIN = 'PIN',
}
