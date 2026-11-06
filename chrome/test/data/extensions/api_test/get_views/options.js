// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Options page script for the getViews API test
// summary: Script loaded by the options page that calls the background page's optionsPageCallback so the test can assert getViews results.
// ---

const backgroundPage = chrome.extension.getBackgroundPage();
backgroundPage.optionsPageCallback();
