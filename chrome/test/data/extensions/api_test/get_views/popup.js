// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Popup page script for the getViews API test
// summary: Script loaded by the popup page that calls the background page's popupCallback so the test can assert getViews results.
// ---

const backgroundPage = chrome.extension.getBackgroundPage();
backgroundPage.popupCallback();
