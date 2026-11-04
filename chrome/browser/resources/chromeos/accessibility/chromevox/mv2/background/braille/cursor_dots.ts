// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cursor dots constant
// summary: Defines the braille dot pattern used to render a cursor on a braille display.
// ---

/**
 * Dots representing a cursor.
 */
import {TestImportManager} from '/common/testing/test_import_manager.js';

export const CURSOR_DOTS = 1 << 6 | 1 << 7;

TestImportManager.exportForTesting(['CURSOR_DOTS', CURSOR_DOTS]);
