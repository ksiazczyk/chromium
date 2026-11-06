// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: RLZ library iOS machine ID implementation
// summary: Implements rlz_lib::GetRawMachineId on iOS by filling the output with the device identifier from base/ios device_util and reporting additional data.
// ---

#include <string>

#include "base/ios/device_util.h"
#include "base/strings/utf_string_conversions.h"

namespace rlz_lib {

bool GetRawMachineId(std::u16string* data, int* more_data) {
  *data = base::ASCIIToUTF16(ios::device_util::GetDeviceIdentifier(NULL));
  *more_data = 1;
  return true;
}

}  // namespace rlz_lib
