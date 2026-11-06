// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HRESULT logging operator implementation
// summary: Implements the putHR stream operator that writes HRESULT values in hexadecimal to logging streams.
// ---

#include "chrome/credential_provider/gaiacp/logging.h"

#include <iomanip>

namespace credential_provider {

std::ostream& operator<<(std::ostream& stream, const putHR& o) {
  stream << std::setbase(16) << o.hr_;
  return stream;
}

}  // namespace credential_provider
