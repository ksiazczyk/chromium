// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker script for update incognito mode test v2
// summary: Service worker script registering an empty runtime.onInstalled listener and signaling test completion via chrome.test.notifyPass.
// ---

chrome.runtime.onInstalled.addListener(
    async (details) => {
        // nothing
    });

chrome.test.notifyPass();
