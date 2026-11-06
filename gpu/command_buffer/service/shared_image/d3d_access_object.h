// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: D3D access object variant for D3D image backings
// summary: Defines the D3DAccessObject variant that identifies the D3D11 device or D3D12 command queue performing an access on a D3D image backing.
// ---

#ifndef GPU_COMMAND_BUFFER_SERVICE_SHARED_IMAGE_D3D_ACCESS_OBJECT_H_
#define GPU_COMMAND_BUFFER_SERVICE_SHARED_IMAGE_D3D_ACCESS_OBJECT_H_

#include <d3d11.h>
#include <d3d12.h>
#include <wrl/client.h>

#include <variant>

namespace gpu {

// Identifies the device performing an access on a D3DImageBacking. Each D3D API
// is represented by that API's synchronization primitive- an ID3D11Device
// for D3D11, or an ID3D12CommandQueue for D3D12.
using D3DAccessObject =
    std::variant<Microsoft::WRL::ComPtr<ID3D11Device>,
                 Microsoft::WRL::ComPtr<ID3D12CommandQueue>>;

}  // namespace gpu

#endif  // GPU_COMMAND_BUFFER_SERVICE_SHARED_IMAGE_D3D_ACCESS_OBJECT_H_
