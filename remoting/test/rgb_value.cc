// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: RGBValue implementation
// summary: Implements the constructors and destructor of the RGBValue struct used to store RGB colors in remoting tests.
// ---

#include "remoting/test/rgb_value.h"

namespace remoting {
namespace test {

RGBValue::RGBValue() : red(0), green(0), blue(0) {}
RGBValue::RGBValue(uint8_t r, uint8_t g, uint8_t b)
    : red(r), green(g), blue(b) {}

RGBValue::~RGBValue() = default;

}  // namespace test
}  // namespace remoting
