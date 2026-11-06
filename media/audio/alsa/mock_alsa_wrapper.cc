// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockAlsaWrapper implementation
// summary: Implements the constructor and destructor of MockAlsaWrapper, a GoogleMock-based fake of the ALSA wrapper used in unit tests.
// ---

#include "media/audio/alsa/mock_alsa_wrapper.h"

namespace media {

MockAlsaWrapper::MockAlsaWrapper() = default;

MockAlsaWrapper::~MockAlsaWrapper() = default;

}  // namespace media
