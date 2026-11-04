// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AI learn more URL utility
// summary: Helper that returns the enterprise or regular learn-more URL depending on the model execution enterprise policy value.
// ---

import {ModelExecutionEnterprisePolicyValue} from './constants.js';

export function getAiLearnMoreUrl(
    enterprisePref: chrome.settingsPrivate.PrefObject|undefined,
    learnMoreUrl: string, learnMoreEnterpriseUrl: string): string {
  return enterprisePref?.value ===
          ModelExecutionEnterprisePolicyValue.ALLOW_WITHOUT_LOGGING ?
      learnMoreEnterpriseUrl :
      learnMoreUrl;
}
