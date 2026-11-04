// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeVox Google Docs injection script
// summary: Injects into Google Docs pages and dispatches a chromeVoxLoaded event so Docs enables accessibility mode with braille support.
// ---

// By injecting this into Google Docs pages, ChromeVox can inform
// docs to turn on A11y mode with braille.
const event = document.createEvent('UIEvents');
event.initEvent('chromeVoxLoaded', true, false);
document.dispatchEvent(event);
