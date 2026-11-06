// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Parental controls test utilities
// summary: Helper that creates app objects for testing the parental controls settings UI.
// ---

import type {appParentalControlsHandlerMojom} from 'chrome://os-settings/os_settings.js';

/**
 * Creates an app for testing purpose.
 */
export function createApp(id: string, title: string, isBlocked: boolean):
    appParentalControlsHandlerMojom.App {
  return {id, title, isBlocked};
}
