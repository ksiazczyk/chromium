// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockContentAnalysisInfoBase implementation
// summary: Implements the constructor and destructor of MockContentAnalysisInfoBase, a gmock stand-in for ContentAnalysisInfoBase used in content scanning tests.
// ---

#include "components/enterprise/connectors/core/cloud_content_scanning/mock_content_analysis_info.h"

namespace enterprise_connectors {

MockContentAnalysisInfoBase::MockContentAnalysisInfoBase() = default;
MockContentAnalysisInfoBase::~MockContentAnalysisInfoBase() = default;

}  // namespace enterprise_connectors
