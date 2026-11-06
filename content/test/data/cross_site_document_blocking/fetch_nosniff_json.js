// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fetch nosniff JSON test script
// summary: Test script that fetches /site_isolation/nosniff.json and reports the response body or error via domAutomationController.
// ---

fetch('/site_isolation/nosniff.json')
    .then(response => response.text())
    .then(text => domAutomationController.send('BODY: ' + text))
    .catch(err => domAutomationController.send('ERROR: ' + err));
