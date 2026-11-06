// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker entry point for the MIME type test extension
// summary: Service worker entry point that imports the shared provider test helper and initializes serviceWorkerMain for the MIME type test extension.
// ---

import {serviceWorkerMain} from '/_test_resources/api_test/file_system_provider/service_worker/provider.js';

serviceWorkerMain(self);
