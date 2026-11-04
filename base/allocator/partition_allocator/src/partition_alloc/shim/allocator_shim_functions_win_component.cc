// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Allocator shim functions for Windows component build
// summary: Provides allocator shim function definitions for the Windows component build, guarded by build-time cross-checks.
// ---

#include "partition_alloc/buildflags.h"
#include "partition_alloc/shim/allocator_shim.h"
#include "partition_alloc/shim/allocator_shim_functions.h"
#include "partition_alloc/shim/checked_multiply_win.h"

// Cross-checks.
#if !PA_BUILDFLAG(IS_COMPONENT_BUILD) || !PA_BUILDFLAG(IS_WIN)
#error This code is only for Windows component build.
#endif
