// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: BcryptPrimitives ProcessPrng declaration for the shim
// summary: Declares the ProcessPrng entry point from bcryptprimitives.dll for use by the apifw.dll test shim.
// ---

#ifndef SANDBOX_WIN_TESTS_BASIC_PROCESS_SHIM_BCRYPTPRIMITIVES_DECLARATIONS_H_
#define SANDBOX_WIN_TESTS_BASIC_PROCESS_SHIM_BCRYPTPRIMITIVES_DECLARATIONS_H_

#include <windows.h>

extern "C" {

BOOL WINAPI ProcessPrng(PBYTE pbData, SIZE_T cbData);

}  // extern "C"

#endif  // SANDBOX_WIN_TESTS_BASIC_PROCESS_SHIM_BCRYPTPRIMITIVES_DECLARATIONS_H_
