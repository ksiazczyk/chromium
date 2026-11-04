// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: ChromeVox MV2 braille logging E2E test
// summary: End-to-end test verifying that braille output is written to the log store when braille logging is enabled.
// ---

GEN_INCLUDE(['../../testing/chromevox_e2e_test_base.js']);

ChromeVoxMV2BrailleTest = class extends ChromeVoxE2ETest {};

AX_TEST_F('ChromeVoxMV2BrailleTest', 'BrailleLog', async function() {
  this.addCallbackPostMethod(
      LogStore.instance, 'writeTextLog', this.newCallback((text, type) => {
        assertEquals('Braille "test"', text);
        assertEquals(LogType.BRAILLE, type);
      }));
  SettingsManager.set('enableBrailleLogging', true);
  BrailleBackground.instance.frozen_ = false;
  BrailleBackground.instance.write({text: new Spannable('test')});
});
