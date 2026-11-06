// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock zwp_text_input v3 client implementation
// summary: Provides constructor and destructor definitions for the MockZwpTextInputV3Client test double.
// ---

#include "ui/ozone/platform/wayland/test/mock_zwp_text_input_v3_client.h"

#include "ui/ozone/platform/wayland/host/span_style.h"

namespace ui {

MockZwpTextInputV3Client::MockZwpTextInputV3Client() = default;
MockZwpTextInputV3Client::~MockZwpTextInputV3Client() = default;

}  // namespace ui
