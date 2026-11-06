// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script calling chrome.history without permission
// summary: Background script for the error console test extension that calls chrome.history.addUrl without the history permission to trigger a runtime error.
// ---

chrome.history.addUrl({'url': 'https://www.google.com/'});
