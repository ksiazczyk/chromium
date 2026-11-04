// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AtlThrow implementation that crashes on ATL errors
// summary: Implements AtlThrowImpl, terminating the process immediately and specifically on out-of-memory HRESULTs.
// ---

#include "base/win/atl_throw.h"

#include <winerror.h>

#include "base/compiler_specific.h"
#include "base/debug/alias.h"
#include "base/immediate_crash.h"
#include "base/process/memory.h"

namespace base {
namespace win {

NOINLINE void __stdcall AtlThrowImpl(HRESULT hr) {
  base::debug::Alias(&hr);
  if (hr == E_OUTOFMEMORY) {
    base::TerminateBecauseOutOfMemory(0);
  }
  ImmediateCrash();
}

}  // namespace win
}  // namespace base
