// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Launch notification script
// summary: Sends the Launched message to signal that the test app has started.
// ---

chrome.test.sendMessage('Launched');
