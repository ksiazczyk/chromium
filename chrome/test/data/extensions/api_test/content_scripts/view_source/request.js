// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script message sender for the view-source test
// summary: Content script that sends a runtime message so the background test can detect whether content scripts improperly run in view-source mode.
// ---

chrome.runtime.sendMessage({});
