// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Proto extras support library implementation
// summary: Implements the Base64EncodeCord helper used by the proto_extras support library.
// ---

#include "components/proto_extras/proto_extras_lib.h"

#include <string>

#include "base/base64.h"
#include "third_party/abseil-cpp/absl/strings/cord.h"

namespace proto_extras {

std::string Base64EncodeCord(const absl::Cord& cord) {
  return base::Base64Encode(std::string(cord));
}

}  // namespace proto_extras
