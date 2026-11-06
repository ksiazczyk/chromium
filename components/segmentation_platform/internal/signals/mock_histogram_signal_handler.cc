// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock histogram signal handler implementation
// summary: Implements the constructor and destructor of the mock histogram signal handler used as a test double.
// ---

#include "components/segmentation_platform/internal/signals/mock_histogram_signal_handler.h"

namespace segmentation_platform {

MockHistogramSignalHandler::MockHistogramSignalHandler()
    : HistogramSignalHandler("", nullptr, nullptr) {}

MockHistogramSignalHandler::~MockHistogramSignalHandler() = default;

}  // namespace segmentation_platform
