// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker entry for the evil test extension
// summary: Service worker that starts the shared fileSystemProvider test provider main routine for the evil edge-case tests.
// ---

import {serviceWorkerMain} from '/_test_resources/api_test/file_system_provider/service_worker/provider.js';

serviceWorkerMain(self);
