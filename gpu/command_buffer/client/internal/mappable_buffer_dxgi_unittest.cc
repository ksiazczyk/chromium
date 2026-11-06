// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MappableBufferDXGI unit test instantiation
// summary: Instantiates the shared MappableBufferTest typed test suite for the DXGI implementation, disabled by default because it requires DX11.
// ---

#include "gpu/command_buffer/client/internal/mappable_buffer_dxgi.h"

#include "gpu/command_buffer/client/internal/mappable_buffer_test_template.h"

namespace gpu {
namespace {

// Disabled by default as it requires DX11.
INSTANTIATE_TYPED_TEST_SUITE_P(DISABLED_MappableBufferDXGI,
                               MappableBufferTest,
                               MappableBufferDXGI);
}  // namespace
}  // namespace gpu
