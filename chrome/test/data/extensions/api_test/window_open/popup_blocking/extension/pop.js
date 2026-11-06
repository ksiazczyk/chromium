// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Popup window helper for popup blocking test
// summary: Shared helper defining pop(), which opens a normal and a sized popup via window.open for use by the background, tab, and content scripts.
// ---

function pop(popupUrl) {
  window.open(popupUrl);
  window.open(popupUrl, '', 'width=300,height=300');
}
