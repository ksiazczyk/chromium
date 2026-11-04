// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview
 * Provides functions used for OS settings search.
 * Also provides a way to inject a test implementation for verifying
 * OS settings search.
 */

// ---docerion
// type: source
// title: OS settings search handler accessor
// summary: Provides access to the OS settings search Mojo handler and allows injecting a test implementation for verifying settings search behavior.
// ---

import type {SearchHandlerInterface} from '../mojom-webui/search.mojom-webui.js';
import {SearchHandler} from '../mojom-webui/search.mojom-webui.js';

let settingsSearchHandler: SearchHandlerInterface|null = null;

export function setSettingsSearchHandlerForTesting(
    testSearchHandler: SearchHandlerInterface): void {
  settingsSearchHandler = testSearchHandler;
}

export function getSettingsSearchHandler(): SearchHandlerInterface {
  if (settingsSearchHandler) {
    return settingsSearchHandler;
  }

  settingsSearchHandler = SearchHandler.getRemote();
  return settingsSearchHandler;
}
