// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Policy indicator strings test fixture
// summary: Test fixture that defines the strings shown by policy indicator elements and assigns them to window so tests residing in JS modules can use them.
// ---

import type {CrPolicyStringsType} from 'chrome://resources/cr_elements/policy/cr_policy_types.js';

/** @fileoverview Sets up strings used by policy indicator elements. */
export const CrPolicyStrings: CrPolicyStringsType = {
  controlledSettingExtension: 'extension: $1',
  controlledSettingExtensionWithoutName: 'extension',
  controlledSettingPolicy: 'policy',
  controlledSettingRecommendedMatches: 'matches',
  controlledSettingRecommendedDiffers: 'differs',
  controlledSettingParent: 'parent',
  controlledSettingChildRestriction: 'Restricted for child',

  // <if expr="is_chromeos">
  controlledSettingShared: 'shared: $1',
  controlledSettingWithOwner: 'owner: $1',
  controlledSettingNoOwner: 'owner',
  // </if>
};

// Necessary for tests residing within a JS module.
Object.assign(window, {CrPolicyStrings});
