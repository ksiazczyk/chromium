// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockSnapperProvider implementation
// summary: Implements the constructor and destructor of MockSnapperProvider, which derives from manta::SnapperProvider for use in tests.
// ---

#include "chrome/browser/ash/lobster/mock/mock_snapper_provider.h"

#include "components/manta/snapper_provider.h"

MockSnapperProvider::MockSnapperProvider()
    : manta::SnapperProvider(nullptr, nullptr) {}

MockSnapperProvider::~MockSnapperProvider() = default;
