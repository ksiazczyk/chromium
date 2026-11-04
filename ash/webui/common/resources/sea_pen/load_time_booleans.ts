// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Getters for all of the loadTimeData booleans used throughout
 * SeaPen.
 * Export them as functions so they reload the values when overridden in test.
 */

// ---docerion
// type: source
// title: SeaPen feature flag getters
// summary: Provides functions that read SeaPen-related boolean feature flags from loadTimeData so values reload when overridden in tests.
// ---

import {loadTimeData} from 'chrome://resources/js/load_time_data.js';

export function isSeaPenEnabled() {
  return loadTimeData.getBoolean('isSeaPenEnabled');
}

export function isSeaPenTextInputEnabled() {
  return loadTimeData.getBoolean('isSeaPenTextInputEnabled');
}

export function isSeaPenUseExptTemplateEnabled() {
  return loadTimeData.getBoolean('isSeaPenUseExptTemplateEnabled');
}

export function isVcResizeThumbnailEnabled() {
  return loadTimeData.getBoolean('isVcResizeThumbnailEnabled');
}

export function isManagedSeaPenEnabled() {
  return loadTimeData.getBoolean('isManagedSeaPenEnabled');
}

export function isManagedSeaPenFeedbackEnabled() {
  return loadTimeData.getBoolean('isManagedSeaPenFeedbackEnabled');
}
