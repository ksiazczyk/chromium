// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock form data Android bridge implementation
// summary: Implements the constructor and destructor of MockFormDataAndroidBridge, a gmock test double for FormDataAndroidBridge.
// ---

#include "components/android_autofill/browser/mock_form_data_android_bridge.h"

namespace autofill {

MockFormDataAndroidBridge::MockFormDataAndroidBridge() = default;

MockFormDataAndroidBridge::~MockFormDataAndroidBridge() = default;

}  // namespace autofill
