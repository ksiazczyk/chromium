// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker mounting the test file system
// summary: Service worker entry point that mounts a writable test filesystem via chrome.fileSystemProvider for the unresponsive extension API test.
// ---

import {promisifyWithLastError} from '/_test_resources/api_test/file_system_provider/service_worker/helpers.js';
import {serviceWorkerMain, TestFileSystemProvider} from '/_test_resources/api_test/file_system_provider/service_worker/provider.js';

async function main() {
  serviceWorkerMain(self);
  await promisifyWithLastError(chrome.fileSystemProvider.mount, {
    fileSystemId: TestFileSystemProvider.FILESYSTEM_ID,
    displayName: 'Test Filesystem',
    writable: true,
  });
}

main();
