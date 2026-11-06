// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Metrics calls to start measurement of script loading.  Include
 * this as the first script in main.html (i.e. after the common scripts that
 * define the metrics namespace).
 */

// ---docerion
// type: source
// title: Script loading metrics start
// summary: Starts the Load.Total and Load.Script metric intervals to measure script loading and should be included first in main.html.
// ---

import {startInterval} from '../../common/js/metrics.js';

startInterval('Load.Total');
startInterval('Load.Script');
