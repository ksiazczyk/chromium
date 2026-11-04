// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock anchored message delegate implementation
// summary: Implements the constructor and destructor of the gmock delegate that stands in for AnchoredMessageBubbleView::Delegate in tests.
// ---

#include "chrome/browser/ui/views/page_action/test_support/mock_anchored_message_delegate.h"

namespace page_actions {

MockAnchoredMessageDelegate::MockAnchoredMessageDelegate() = default;
MockAnchoredMessageDelegate::~MockAnchoredMessageDelegate() = default;

}  // namespace page_actions
