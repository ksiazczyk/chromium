// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test DLL exporting a counted API for IATHook tests
// summary: Implements a small test DLL whose ExportedApi function increments a call counter used to verify IAT hooking in the unit tests.
// ---

#include "chrome/chrome_elf/hook_util/test/hook_util_test_dll.h"

namespace {

int g_export_call_count = 0;

}  // namespace

extern "C" __declspec(dllexport) void ExportedApi() {
  g_export_call_count++;
}

extern "C" __declspec(dllexport) int ExportedApiCallCount() {
  return g_export_call_count;
}

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
  return TRUE;
}
