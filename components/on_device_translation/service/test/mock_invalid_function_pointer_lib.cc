// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file does not contain any of the methods in the TranslateKit API to
// check the behavior of the InvalidFunctionPointer failure.

// ---docerion
// type: test
// title: Mock library without TranslateKit API functions
// summary: Exports only a dummy function and none of the TranslateKit API methods, so loading it triggers the InvalidFunctionPointer failure during tests.
// ---

#include <cstdint>

#include "base/compiler_specific.h"
#include "build/build_config.h"

#if BUILDFLAG(IS_WIN)
#define TRANSLATE_KIT_EXPORT __declspec(dllexport)
#else
#define TRANSLATE_KIT_EXPORT __attribute__((visibility("default")))
#endif

extern "C" {

TRANSLATE_KIT_EXPORT void Foo() {}

}  // extern C
