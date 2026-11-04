// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shortcut input Mojo interface provider
// summary: Provides singleton access to the shortcut input Mojo interface, with a setter for injecting a test provider.
// ---

import {assert} from 'chrome://resources/js/assert.js';

import {ShortcutInputProvider} from '../mojom-webui/shortcut_input_provider.mojom-webui.js';

import type {ShortcutInputProviderInterface} from './input_device_settings_types.js';

/**
 * @fileoverview
 * Provides singleton access to mojo interfaces.
 */

let shortcutInputProvider: ShortcutInputProviderInterface|null;

export function setShortcutInputProviderForTesting(
    testProvider: ShortcutInputProviderInterface): void {
  shortcutInputProvider = testProvider;
}

export function getShortcutInputProvider(): ShortcutInputProviderInterface {
  if (!shortcutInputProvider) {
    shortcutInputProvider = ShortcutInputProvider.getRemote();
  }

  assert(!!shortcutInputProvider);
  return shortcutInputProvider;
}
