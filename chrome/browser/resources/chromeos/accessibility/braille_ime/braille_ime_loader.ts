// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Braille IME entry point and initialization
// summary: Creates a BrailleIme instance on globalThis and initializes it as the extension's service worker entry point.
// ---

import {BrailleIme} from './braille_ime.js';

/**
 * The Braille IME object.  Attached to the globalThis object for ease of
 * debugging.
 */
declare global {
  var ime: BrailleIme;
}

globalThis.ime = new BrailleIme();
globalThis.ime.init();
