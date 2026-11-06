// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockTranslateMetricsLogger implementation
// summary: Implements the MockTranslateMetricsLogger constructor, destructor, and weak pointer accessor used by translate metrics tests.
// ---

#include "components/translate/core/browser/mock_translate_metrics_logger.h"

namespace translate {

namespace testing {

MockTranslateMetricsLogger::MockTranslateMetricsLogger() = default;

MockTranslateMetricsLogger::~MockTranslateMetricsLogger() = default;

base::WeakPtr<MockTranslateMetricsLogger>
MockTranslateMetricsLogger::GetWeakPtr() {
  return weak_method_factory_.GetWeakPtr();
}

}  // namespace testing

}  // namespace translate
