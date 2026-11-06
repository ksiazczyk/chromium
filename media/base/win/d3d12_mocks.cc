// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: D3D12 mock implementations
// summary: Implements constructors and destructors for the D3D12 device, resource, command list, queue, allocator and fence mock classes used in tests.
// ---

#include "media/base/win/d3d12_mocks.h"

namespace media {

D3D12DeviceMock::D3D12DeviceMock() = default;
D3D12DeviceMock::~D3D12DeviceMock() = default;

D3D12ResourceMock::D3D12ResourceMock() = default;
D3D12ResourceMock::~D3D12ResourceMock() = default;

D3D12GraphicsCommandListMock::D3D12GraphicsCommandListMock() = default;
D3D12GraphicsCommandListMock::~D3D12GraphicsCommandListMock() = default;

D3D12CommandQueueMock::D3D12CommandQueueMock() = default;
D3D12CommandQueueMock::~D3D12CommandQueueMock() = default;

D3D12CommandAllocatorMock::D3D12CommandAllocatorMock() = default;
D3D12CommandAllocatorMock::~D3D12CommandAllocatorMock() = default;

D3D12FenceMock::D3D12FenceMock() = default;
D3D12FenceMock::~D3D12FenceMock() = default;

}  // namespace media
