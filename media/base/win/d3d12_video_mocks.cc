// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: D3D12 video mock implementations
// summary: Implements constructors and destructors for the D3D12 video device, video processor and video process command list mock classes used in tests.
// ---

#include "media/base/win/d3d12_video_mocks.h"

namespace media {

D3D12VideoDevice3Mock::D3D12VideoDevice3Mock() = default;
D3D12VideoDevice3Mock::~D3D12VideoDevice3Mock() = default;

D3D12VideoProcessorMock::D3D12VideoProcessorMock() = default;
D3D12VideoProcessorMock::~D3D12VideoProcessorMock() = default;

D3D12VideoProcessCommandListMock::D3D12VideoProcessCommandListMock() = default;
D3D12VideoProcessCommandListMock::~D3D12VideoProcessCommandListMock() = default;

}  // namespace media
