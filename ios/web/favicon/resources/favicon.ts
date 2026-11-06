// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Gets and returns favicons in main frame. This script
 * should be injected only into the main frame when it's loaded.
 */

// ---docerion
// type: source
// title: Favicon main frame injection script
// summary: Injected script for the main frame that calls sendFaviconUrls to report the page's favicons when it loads.
// ---

import {sendFaviconUrls} from '//ios/web/favicon/resources/favicon_utils.js';

sendFaviconUrls();
