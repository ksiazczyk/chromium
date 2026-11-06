// Copyright 2010 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock EGL interface implementation
// summary: Implements MockEGLInterface, a test double that lets tests install a fake EGL implementation for the GL stack.
// ---

#include "ui/gl/egl_mock.h"

namespace gl {

MockEGLInterface::MockEGLInterface() = default;

MockEGLInterface::~MockEGLInterface() = default;

MockEGLInterface* MockEGLInterface::interface_;

void MockEGLInterface::SetEGLInterface(MockEGLInterface* egl_interface) {
  interface_ = egl_interface;
}

}  // namespace gl
