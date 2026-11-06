// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This tests loading the Certificate Manager V2 from the
// chrome://certificate-manager URL

// ---docerion
// type: test
// title: Certificate manager element load test
// summary: Mocha test suite that verifies the certificate manager element is present in the document after the WebUI page loads.
// ---

import {assertTrue} from 'chrome://webui-test/chai_assert.js';

suite('CertificateManager', () => {
  test('element check', () => {
    const element = document.querySelector('certificate-manager');
    assertTrue(!!element);
  });
});
