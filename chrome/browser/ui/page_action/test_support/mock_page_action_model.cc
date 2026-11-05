// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock page action model implementation
// summary: Provides out-of-line constructor and destructor for the mock page action model class.
// ---

#include "chrome/browser/ui/page_action/test_support/mock_page_action_model.h"

namespace page_actions {

// Required out-of-line members because this is deemed a complex class.
MockPageActionModel::MockPageActionModel() = default;
MockPageActionModel::~MockPageActionModel() = default;

}  // namespace page_actions
