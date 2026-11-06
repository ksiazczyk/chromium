// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Event log provider DLL export stub
// summary: Exports a placeholder function so the Windows build also generates a .lib file for the event log provider DLL.
// ---

// Force the generation of a .lib file for the .dll since Ninja expects shared
// libraries to generate a .dll and a .lib file.
__declspec(dllexport) bool fn() {
  return true;
}
