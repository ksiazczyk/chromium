// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebView content restriction interstitial controller
// summary: JavaScript that wires the back and learn more links of the content restriction interstitial to interstitial commands.
// ---

import {HIDDEN_CLASS, preventDefaultOnPoundLinkClicks, SecurityInterstitialCommandId, sendCommand} from 'chrome://interstitials/common/resources/interstitial_common.js';
import {loadTimeData} from 'chrome://resources/js/load_time_data.js';

function initPage() {
  loadTimeData.data = window.loadTimeDataRaw;
  preventDefaultOnPoundLinkClicks();
  const learnMoreLink = document.querySelector('#learn-more-link');
  if (learnMoreLink) {
    learnMoreLink.addEventListener('click', function() {
      sendCommand(SecurityInterstitialCommandId.CMD_SHOW_MORE_SECTION);
    });
  }

  const backLink = document.querySelector('#back-link');
  if (backLink) {
    if (loadTimeData.valueExists('hide_back_link') &&
        loadTimeData.getBoolean('hide_back_link')) {
      backLink.classList.add(HIDDEN_CLASS);
    } else {
      backLink.addEventListener('click', function() {
        sendCommand(SecurityInterstitialCommandId.CMD_DONT_PROCEED);
      });
    }
  }
}

document.addEventListener('DOMContentLoaded', initPage);
