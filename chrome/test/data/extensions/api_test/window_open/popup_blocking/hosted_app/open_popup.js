// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Popup opening script
// summary: Script that calls window.open to open popup.html in a 300x300 popup window for the popup blocking test.
// ---

window.open('popup.html', '', 'width=300,height=300');
