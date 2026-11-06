// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GL ANGLE utility for Windows
// summary: Declares a helper that queries the Direct3D 11 device object from an ANGLE GL context on Windows.
// ---

#ifndef UI_GL_GL_ANGLE_UTIL_WIN_H_
#define UI_GL_GL_ANGLE_UTIL_WIN_H_

#include <d3d11.h>
#include <wrl/client.h>

#include "ui/gl/gl_export.h"

namespace gl {

GL_EXPORT Microsoft::WRL::ComPtr<ID3D11Device>
QueryD3D11DeviceObjectFromANGLE();

}  // namespace gl

#endif  // UI_GL_GL_ANGLE_UTIL_WIN_H_
