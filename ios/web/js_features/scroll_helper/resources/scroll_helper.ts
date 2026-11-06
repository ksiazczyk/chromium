// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scroll helper JavaScript API for iOS web view
// summary: Registers a gCrWeb scrollHelper API that tracks scroll view dragging and suppresses window.scrollTo calls while the user is scrolling, as a workaround for crbug.com/554257.
// ---

import {CrWebApi, gCrWeb} from '//ios/web/public/js_messaging/resources/gcrweb.js';

/**
 * @fileoverview APIs used for the scroll workaround. See crbug.com/554257.
 */

let webViewScrollViewIsDragging = false;

const scrollHelperApi = new CrWebApi('scrollHelper');

/**
 * Tracks whether user is in the middle of scrolling/dragging. If user is
 * scrolling, ignore window.scrollTo() until user stops scrolling.
 */
scrollHelperApi.addFunction(
    'setWebViewScrollViewIsDragging', (state: boolean) => {
      webViewScrollViewIsDragging = state;
    });

gCrWeb.registerApi(scrollHelperApi);

const originalWindowScrollTo_: Function = window.scrollTo;

/**
 * Wraps the original window.scrollTo() to suppress it as long as
 * webViewScrollViewIsDragging is true. Use apply() with called
 * arguments since there are two variants of window.scrollTo:
 * scrollTo(x, y) and scrollTo(options).
 */
window.scrollTo = function() {
  if (webViewScrollViewIsDragging) return;
  originalWindowScrollTo_.apply(null, arguments);
};
