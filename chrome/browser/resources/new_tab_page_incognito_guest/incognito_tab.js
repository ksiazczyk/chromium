// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Incognito tab page script
// summary: Script that observes theme changes and reloads the incognito theme stylesheet when the theme updates.
// ---

import {addWebUiListener} from 'chrome://resources/js/cr.js';
import {$} from 'chrome://resources/js/util.js';

window.addEventListener('load', function() {
  let cookieSettingsUrl;

  addWebUiListener('theme-changed', themeData => {
    document.documentElement.setAttribute(
        'hascustombackground', themeData.hasCustomBackground);
    $('incognitothemecss').href =
        'chrome://theme/css/incognito_tab_theme.css?' + Date.now();
  });
  chrome.send('observeThemeChanges');
});
