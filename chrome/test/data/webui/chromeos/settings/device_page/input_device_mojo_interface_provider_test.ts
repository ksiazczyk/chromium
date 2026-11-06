// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Input device Mojo interface provider tests
// summary: Verifies that the input device settings provider is created on demand when no provider exists.
// ---

import {getInputDeviceSettingsProvider} from 'chrome://os-settings/os_settings.js';
import {assertTrue} from 'chrome://webui-test/chai_assert.js';

suite('InputDeviceMojoInterfaceProvider', () => {
  test('SettingGettingTestProvider', () => {
    // Test that if there was no provider, getInputDeviceSettingsProvider
    // method will create one.
    const provider = getInputDeviceSettingsProvider();
    assertTrue(!!provider);
  });
});
