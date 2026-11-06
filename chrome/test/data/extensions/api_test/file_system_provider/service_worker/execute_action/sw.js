// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker entry for the execute action test
// summary: Service worker entry point that starts the shared test file system provider used by the execute action API test.
// ---

import {serviceWorkerMain} from '/_test_resources/api_test/file_system_provider/service_worker/provider.js';

serviceWorkerMain(self);
