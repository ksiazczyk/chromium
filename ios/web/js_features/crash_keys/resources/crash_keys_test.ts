// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Test script to expose accessibility of crash_keys functions.
 */

// ---docerion
// type: test
// title: Crash keys test bridge
// summary: Registers the crash keys functions with a CrWebApi test bridge so their accessibility can be exercised from native tests.
// ---

import {clearAllCrashKeys, clearCrashKey, getCrashKeys, setCrashKey} from '//ios/web/js_features/crash_keys/resources/crash_keys.js';
import {CrWebApi, gCrWeb} from '//ios/web/public/js_messaging/resources/gcrweb.js';

const crash_keys_tests = new CrWebApi('crash_keys_tests');

gCrWeb.registerApi(crash_keys_tests);

crash_keys_tests.addFunction('getCrashKeys', getCrashKeys);
crash_keys_tests.addFunction('setCrashKey', setCrashKey);
crash_keys_tests.addFunction('clearCrashKey', clearCrashKey);
crash_keys_tests.addFunction('clearAllCrashKeys', clearAllCrashKeys);
