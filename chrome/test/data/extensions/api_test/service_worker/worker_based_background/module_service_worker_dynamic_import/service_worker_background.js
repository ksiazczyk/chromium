// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background script with dynamic import
// summary: Service worker background script that dynamically imports empty.js, which is expected to fail on ServiceWorkerGlobalScope.
// ---

// We expect this import to fail as dynamic import is rejected on
// ServiceWorkerGlobalScope.
import('./empty.js');
