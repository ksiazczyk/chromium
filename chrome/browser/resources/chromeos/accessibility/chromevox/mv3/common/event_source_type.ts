// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Event source type enum
// summary: Enumerates the source types used to track where the current ChromeVox event came from, such as keyboard, braille or touch gesture.
// ---

/**
 * @fileoverview Types available for tracking the current event source.
 */
import {TestImportManager} from '/common/testing/test_import_manager.js';

export enum EventSourceType {
  NONE = 'none',
  BRAILLE_KEYBOARD = 'brailleKeyboard',
  STANDARD_KEYBOARD = 'standardKeyboard',
  TOUCH_GESTURE = 'touchGesture',
}

TestImportManager.exportForTesting(['EventSourceType', EventSourceType]);
