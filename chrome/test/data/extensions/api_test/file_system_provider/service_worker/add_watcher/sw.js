// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Add watcher service worker entry point
// summary: Service worker bootstrap that imports and starts the shared test file system provider for the add watcher extension test.
// ---

import {serviceWorkerMain} from '/_test_resources/api_test/file_system_provider/service_worker/provider.js';

serviceWorkerMain(self);
