// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script for the chrome.i18n API test
// summary: Content script that sends a runtime message containing a localized chrome.i18n message with one placeholder as part of the API browser test.
// ---

chrome.runtime.sendMessage(
    chrome.i18n.getMessage('message_with_one_placeholder', '19'));
