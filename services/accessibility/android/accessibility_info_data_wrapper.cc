// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: accessibility_info_data_wrapper.cc
// summary: Implements the base AccessibilityInfoDataWrapper, serializing Android accessibility nodes and windows into Chrome AXNodeData with role and bounds.
// ---

#include "services/accessibility/android/accessibility_info_data_wrapper.h"

#include "services/accessibility/android/ax_tree_source_android.h"

namespace ax::android {

AccessibilityInfoDataWrapper::AccessibilityInfoDataWrapper(
    AXTreeSourceAndroid* tree_source)
    : tree_source_(tree_source) {}

AccessibilityInfoDataWrapper::~AccessibilityInfoDataWrapper() = default;

void AccessibilityInfoDataWrapper::Serialize(ui::AXNodeData* out_data) const {
  out_data->id = GetId();
  PopulateAXRole(out_data);
  tree_source_->serialization_delegate().PopulateBounds(*this, *out_data);
}

}  // namespace ax::android
