// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Injected script navigating to the second web page
// summary: Script injected into the first web page that navigates the tab to the second web page to prove the injection ran.
// ---

location.href = 'web_page2.html';
