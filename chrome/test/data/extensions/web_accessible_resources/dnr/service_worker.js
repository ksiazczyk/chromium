// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker installing DNR redirect rule for test extension
// summary: Service worker that installs a dynamic declarativeNetRequest rule redirecting example.com/url?q= requests to the extension's redirect page.
// ---

chrome.runtime.onInstalled.addListener(async () => {
  await chrome.declarativeNetRequest.updateDynamicRules({
    removeRuleIds: [1],
    addRules: [{
      id: 1,
      action: {
        type: chrome.declarativeNetRequest.RuleActionType.REDIRECT,
        redirect: {
          regexSubstitution:
              `${chrome.runtime.getURL('redirect.html')}?url=\\1`,
        },
      },
      condition: {
        regexFilter: '^(https:\\/\\/example\\.com\/url\\?q=.*)',
        resourceTypes: [chrome.declarativeNetRequest.ResourceType.MAIN_FRAME],
      },
    }],
  });
  chrome.test.sendMessage('ready');
});
