// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Metrics calls to start measurement of script loading.  Include
 * this as the first script in main_background.js.
 */

// ---docerion
// type: source
// title: Metrics start for background script loading
// summary: Starts a metrics interval to measure background script loading time and should be included first in main_background.js.
// ---

import {startInterval} from '../../common/js/metrics.js';

startInterval('Load.BackgroundScript');
