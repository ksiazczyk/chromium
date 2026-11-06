// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Side panel DOM test script
// summary: Reports 'panel_dom' through window.domAutomationController when the side panel page loads.
// ---

document.body.onload = () => {
  window.domAutomationController.send('panel_dom');
};
