// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// An empty DLL for use when testing the chrome://conflicts implementation.

// ---docerion
// type: test
// title: Empty DLL test fixture for the conflicts page
// summary: Empty DLL used as a test fixture when testing the browser's conflicts page implementation.
// ---

#include <windows.h>

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, LPVOID reserved) {
  return TRUE;
}
