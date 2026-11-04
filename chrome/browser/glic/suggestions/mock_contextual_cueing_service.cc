// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock contextual cueing service implementation
// summary: Implements MockContextualCueingService, a gmock-based test double of ContextualCueingService constructed with null dependencies for glic suggestion tests.
// ---

#include "chrome/browser/glic/suggestions/mock_contextual_cueing_service.h"

namespace glic {

MockContextualCueingService::MockContextualCueingService()
    : ContextualCueingService(
          /*page_content_extraction_service=*/nullptr,
          /*optimization_guide_keyed_service=*/nullptr,
          /*loading_predictor=*/nullptr,
          /*pref_service=*/nullptr,
          /*template_url_service=*/nullptr) {}

MockContextualCueingService::~MockContextualCueingService() = default;

}  // namespace glic
