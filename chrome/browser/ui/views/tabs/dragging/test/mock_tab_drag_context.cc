// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock tab drag context implementation
// summary: Implements the MockTabDragContext constructor, destructor and metadata registration for use in tab dragging tests.
// ---

#include "chrome/browser/ui/views/tabs/dragging/test/mock_tab_drag_context.h"

#include "ui/base/metadata/metadata_impl_macros.h"

MockTabDragContext::MockTabDragContext() = default;
MockTabDragContext::~MockTabDragContext() = default;

BEGIN_METADATA(MockTabDragContext)
END_METADATA
