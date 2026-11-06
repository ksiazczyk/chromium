// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Helper module which must be loaded by tests of type
 * "mojo_webui" to have proper support in test_api.js.
 */

// ---docerion
// type: test
// title: Mojo WebUI test support helper
// summary: Helper module loaded by mojo_webui tests to report test results through the TestRunner Mojo interface.
// ---

import {TestRunner} from './web_ui_test.mojom-webui.js';

/**
 * Reports a test result using the TestRunner Mojo interface.
 */
function reportMojoWebUITestResult(result?: string) {
  const runner = TestRunner.getRemote();
  runner.testComplete(result || null);
}

Object.assign(window, {reportMojoWebUITestResult});
