// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: RefCounted alias header for the gpu namespace
// summary: Small header that re-exports base::RefCountedThreadSafe into the gpu namespace for command buffer client code.
// ---

#ifndef GPU_COMMAND_BUFFER_CLIENT_REF_COUNTED_H_
#define GPU_COMMAND_BUFFER_CLIENT_REF_COUNTED_H_

#include "base/memory/ref_counted.h"
namespace gpu {
using base::RefCountedThreadSafe;
}

#endif  // GPU_COMMAND_BUFFER_CLIENT_REF_COUNTED_H_
