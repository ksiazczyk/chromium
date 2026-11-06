// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test DLL 2 for main unit tests
// summary: Test DLL with a dummy export and DllMain stub used as a fixture in the third-party DLL unit tests.
// ---

#include <windows.h>

extern "C" {
// Have a dummy export so that the module gets an export table entry.
void DummyExport() {}
}  // extern "C"

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
  return TRUE;
}
