// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Braille command data tests
// summary: E2E test fixture verifying that initializing the braille dot pattern to command map does not throw on duplicate patterns.
// ---

// Include test fixture.
GEN_INCLUDE(['../../testing/chromevox_e2e_test_base.js']);

/**
 * Test fixture for braille_command_data.js.
 */
ChromeVoxBrailleCommandDataTest = class extends ChromeVoxE2ETest {};


AX_TEST_F('ChromeVoxBrailleCommandDataTest', 'Duplicates', function() {
  try {
    BrailleCommandData.DOT_PATTERN_TO_COMMAND = [];
    BrailleCommandData.init();
  } catch (e) {
    assertNotReached(e.toString());
  }
});
