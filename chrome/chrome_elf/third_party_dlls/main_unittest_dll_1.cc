// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test DLL 1 for main unit tests
// summary: Minimal DllMain-only test DLL built as a fixture for the third-party DLL unit tests.
// ---

#include <windows.h>

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
  return TRUE;
}
