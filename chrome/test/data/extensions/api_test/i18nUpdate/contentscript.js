// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: i18nUpdate test content script
// summary: Content script for the i18nUpdate API test that sets the document title to the localized testMessage and signals test success.
// ---

document.title = chrome.i18n.getMessage('testMessage');
chrome.test.notifyPass();
