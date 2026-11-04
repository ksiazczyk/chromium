// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Switch Access metrics recorder
// summary: Records user action metrics for Switch Access menu actions through the Chrome metrics private API.
// ---

import {StringUtil} from '/common/string_util.js';

/**
 * Class to record metrics for Switch Access.
 */
export namespace SwitchAccessMetrics {
  export function recordMenuAction(menuAction: string): void {
    const metricName = 'Accessibility.CrosSwitchAccess.MenuAction.' +
        StringUtil.toUpperCamelCase(menuAction);
    chrome.metricsPrivate.recordUserAction(metricName);
  }
}
