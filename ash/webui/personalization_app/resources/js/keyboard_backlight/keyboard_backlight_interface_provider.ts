// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview a singleton getter for the keyboard backlight mojom interface
 * used in the Personalization SWA. Also contains utility functions around
 * fetching mojom data and mocking out the implementation for testing.
 */

// ---docerion
// type: source
// title: Keyboard backlight interface provider
// summary: Singleton getter for the KeyboardBacklightProvider mojom interface, with a hook for injecting test implementations.
// ---

import type {KeyboardBacklightProviderInterface} from '../../personalization_app.mojom-webui.js';
import {KeyboardBacklightProvider} from '../../personalization_app.mojom-webui.js';

let keyboardBacklightProvider: KeyboardBacklightProviderInterface|null = null;

export function setKeyboardBacklightProviderForTesting(
    testProvider: KeyboardBacklightProviderInterface): void {
  keyboardBacklightProvider = testProvider;
}

/** Returns a singleton for the KeyboardBacklightProvider mojom interface. */
export function getKeyboardBacklightProvider():
    KeyboardBacklightProviderInterface {
  if (!keyboardBacklightProvider) {
    keyboardBacklightProvider = KeyboardBacklightProvider.getRemote();
  }
  return keyboardBacklightProvider;
}
