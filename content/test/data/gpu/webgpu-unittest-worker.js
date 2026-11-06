// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebGPU unit test worker
// summary: Web worker that runs the WebGPU unit tests by test ID and posts the results back to the main thread.
// ---

import { webGpuUnitTests } from './webgpu-unittest-utils.js';

onmessage = async (e) => {
  postMessage(await webGpuUnitTests.runTest(e.data.testId));
}
