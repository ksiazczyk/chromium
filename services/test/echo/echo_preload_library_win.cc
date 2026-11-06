// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Echo preload library Windows DLL source
// summary: Implements a small Windows DLL for echo service tests whose exported function calls a delay-loaded winmm function.
// ---

// This is a small file to make a loadable dll for the echo service tests.
#include <windows.h>

#include <timeapi.h>

extern "C" {
BOOL WINAPI DllMain(PVOID h, DWORD reason, PVOID reserved) {
  return true;
}

BOOL FnCallsDelayloadFn() {
  // Calls winmm.timeGetTime() which is delayloaded but in a library already in
  // utility processes.
  // This call should happen, we don't actually care about the return.
  if (timeGetTime() == 0) {
    return false;
  }
  return true;
}
}  // extern "C"
