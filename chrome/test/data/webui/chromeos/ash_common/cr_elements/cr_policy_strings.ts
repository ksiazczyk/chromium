// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Policy indicator test strings
// summary: Exports the strings used by policy indicator elements when running WebUI tests.
// ---

import type {CrPolicyStringsType} from 'chrome://resources/ash/common/cr_elements/policy/cr_policy_indicator_mixin.js';

/** @fileoverview Sets up strings used by policy indicator elements. */
export const CrPolicyStrings: CrPolicyStringsType = {
  controlledSettingExtension: 'extension: $1',
  controlledSettingExtensionWithoutName: 'extension',
  controlledSettingPolicy: 'policy',
  controlledSettingRecommendedMatches: 'matches',
  controlledSettingRecommendedDiffers: 'differs',
  controlledSettingParent: 'parent',
  controlledSettingChildRestriction: 'Restricted for child',
  controlledSettingShared: 'shared: $1',
  controlledSettingWithOwner: 'owner: $1',
  controlledSettingNoOwner: 'owner',
};

// Necessary for tests residing within a JS module.
Object.assign(window, {CrPolicyStrings});
