// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Injected script checking display style of the p element
// summary: Script injected after inserting CSS text that reads the computed display style of element test2 and sets the tab title to verify the CSS took effect.
// ---

function getStyle(elem, name) {
  if (document.defaultView && document.defaultView.getComputedStyle) {
    name = name.replace(/([A-Z])/g, '-$1');
    name = name.toLowerCase();

    try {
      const s = document.defaultView.getComputedStyle(elem, '');
      return s && s.getPropertyValue(name);
    } catch (ex) {
      return null;
    }
  } else {
    return null;
  }
}

// NOTE: Need to use `var` here since multiple scripts can be injected and
// otherwise it may throw a "variable already declared" error.
var bElement = document.getElementById('test2');  // eslint-disable-line no-var
// eslint-disable-next-line no-var
var display = getStyle(bElement, 'display').toLowerCase();
document.title = display;
