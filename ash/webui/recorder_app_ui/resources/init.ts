// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Recorder app initialization entry point
// summary: TypeScript entry point that creates the platform handler, initializes core and platform layers and appends the RecorderApp element on DOM content load.
// ---

import {init} from './core/init.js';
import {RecorderApp} from './pages/recorder-app.js';
import {PlatformHandler} from './platforms/index.js';

// The error for the promise is handled by the global unhandledrejection
// handler.

document.addEventListener('DOMContentLoaded', async () => {
  const platformHandler = new PlatformHandler();
  // Initialize core.
  await init(platformHandler);
  // Initialize platform.
  await platformHandler.init();
  document.body.appendChild(new RecorderApp());
});
