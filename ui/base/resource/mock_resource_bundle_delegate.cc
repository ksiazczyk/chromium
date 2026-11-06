// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock resource bundle delegate implementation
// summary: Implements the constructor and destructor of the gmock delegate used to intercept ResourceBundle resource loading in tests.
// ---

#include "ui/base/resource/mock_resource_bundle_delegate.h"

namespace ui {

MockResourceBundleDelegate::MockResourceBundleDelegate() = default;
MockResourceBundleDelegate::~MockResourceBundleDelegate() = default;

}  // namespace ui
