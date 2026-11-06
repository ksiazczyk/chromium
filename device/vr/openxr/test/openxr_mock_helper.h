// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Header for the OpenXR mock trampoline initializer
// summary: Declares InitializeOpenXrMockTrampoline, which loads the trampoline shared library and registers the OpenXR dispatch table.
// ---

#ifndef DEVICE_VR_OPENXR_TEST_OPENXR_MOCK_HELPER_H_
#define DEVICE_VR_OPENXR_TEST_OPENXR_MOCK_HELPER_H_

// Loads the trampoline shared library (if not already loaded) and registers the
// main process OpenXR dispatch table into it.
bool InitializeOpenXrMockTrampoline();

#endif  // DEVICE_VR_OPENXR_TEST_OPENXR_MOCK_HELPER_H_
