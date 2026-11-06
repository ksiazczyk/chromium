// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Back press event dispatcher for Chromecast UI
// summary: JavaScript that creates a synthetic BrowserBack keydown event and dispatches it to the active element, traversing shadow roots and falling back to the document.
// ---

{
  let getActiveElement = function() {
    let activeElement = document.activeElement;
    while (activeElement && activeElement.shadowRoot &&
           activeElement.shadowRoot.activeElement) {
      activeElement = activeElement.shadowRoot.activeElement;
    }
    return activeElement;
  };
  let createBackPressEvent = function() {
    return new KeyboardEvent(
        'keydown',
        {bubbles: true, key: 'BrowserBack', cancelable: true, composed: false});
  };
  let backPressEvent = createBackPressEvent();
  let activeElement = getActiveElement();
  if (activeElement) {
    activeElement.dispatchEvent(backPressEvent);
    if (!backPressEvent.defaultPrevented &&
        activeElement !== document.activeElement) {
      backPressEvent = createBackPressEvent();
      document.dispatchEvent(backPressEvent);
    }
  } else {
    document.dispatchEvent(backPressEvent);
  }
  backPressEvent.defaultPrevented;
};
