// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Event source type enum
// summary: Defines types for tracking the current ChromeVox event source such as braille keyboard, standard keyboard, or touch gesture.
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
