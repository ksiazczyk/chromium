// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockLog implementation
// summary: Implements the MockLog constructor and destructor for the gmock AudioLog test double used in audio service tests.
// ---

#include "services/audio/test/mock_log.h"

namespace audio {

MockLog::MockLog() : receiver_(this) {}

MockLog::~MockLog() = default;

}  // namespace audio
