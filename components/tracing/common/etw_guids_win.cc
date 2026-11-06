// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ETW GUID definitions for Windows
// summary: Defines Windows event tracing GUIDs by including initguid.h and evntrace.h so the GUID symbols are instantiated in this translation unit.
// ---

#include <windows.h>

// Include the magic header that defines INITGUID.
#include <initguid.h>

// Include the header(s) that define the event tracing GUIDs.
#include <evntrace.h>
