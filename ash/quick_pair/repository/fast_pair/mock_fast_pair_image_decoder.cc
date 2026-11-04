// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Fast Pair image decoder implementation
// summary: Implements the constructor and destructor of the GoogleMock mock for the Fast Pair image decoder interface.
// relations:
//   - implements /ash/quick_pair/repository/fast_pair/mock_fast_pair_image_decoder.h
// ---

#include "ash/quick_pair/repository/fast_pair/mock_fast_pair_image_decoder.h"

namespace ash {
namespace quick_pair {

MockFastPairImageDecoder::MockFastPairImageDecoder() = default;

MockFastPairImageDecoder::~MockFastPairImageDecoder() = default;

}  // namespace quick_pair
}  // namespace ash
