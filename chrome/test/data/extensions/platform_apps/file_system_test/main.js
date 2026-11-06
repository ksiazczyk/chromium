// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: File system test app main script
// summary: Notifies the test harness with a 'Launched' message once the test app page has loaded.
// ---

chrome.test.sendMessage('Launched');
