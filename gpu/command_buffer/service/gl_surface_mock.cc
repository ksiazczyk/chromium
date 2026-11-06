// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: GL surface mock implementation
// summary: Provides the constructor and destructor for GLSurfaceMock, a Google Mock stand-in for gl::GLSurface used in GPU service tests.
// ---

#include "gpu/command_buffer/service/gl_surface_mock.h"

namespace gpu {

GLSurfaceMock::GLSurfaceMock() = default;

GLSurfaceMock::~GLSurfaceMock() {
  InvalidateWeakPtrs();
}

}  // namespace gpu
