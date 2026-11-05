// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Stub export for the eventlog provider DLL
// summary: Exports a trivial function to force generation of a .lib file for the eventlog provider DLL, since Ninja expects shared libraries to produce both.
// ---

// Force the generation of a .lib file for the .dll since Ninja expects shared
// libraries to generate a .dll and a .lib file.
__declspec(dllexport) bool fn() {
  return true;
}
