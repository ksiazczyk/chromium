// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: DirectComposition mock class definitions
// summary: Defines constructors and destructors for the DCompositionDeviceMock, DCompositionTargetMock and DCompositionVisualMock classes used in media tests.
// ---

#include "components/viz/service/display_embedder/test_support/dcomp_mocks.h"

namespace media {

DCompositionDeviceMock::DCompositionDeviceMock() = default;
DCompositionDeviceMock::~DCompositionDeviceMock() = default;

DCompositionTargetMock::DCompositionTargetMock() = default;
DCompositionTargetMock::~DCompositionTargetMock() = default;

DCompositionVisualMock::DCompositionVisualMock() = default;
DCompositionVisualMock::~DCompositionVisualMock() = default;

}  // namespace media
