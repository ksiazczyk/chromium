// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock log sink implementation
// summary: Defines the constructor and destructor for the MockLogSink test double used in download service unit tests.
// ---

#include "components/download/internal/background_service/test/mock_log_sink.h"

namespace download {
namespace test {

MockLogSink::MockLogSink() = default;
MockLogSink::~MockLogSink() = default;

}  // namespace test
}  // namespace download
