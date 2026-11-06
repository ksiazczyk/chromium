// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Decryptor base implementation
// summary: Implements the Decryptor base class, including status name lookup and default can-always-decrypt behavior.
// ---

#include "media/base/decryptor.h"

namespace media {

// static
const char* Decryptor::GetStatusName(Status status) {
  switch (status) {
    case kSuccess:
      return "success";
    case kNoKey:
      return "no_key";
    case kNeedMoreData:
      return "need_more_data";
    case kError:
      return "error";
  }
}

Decryptor::Decryptor() = default;

Decryptor::~Decryptor() = default;

bool Decryptor::CanAlwaysDecrypt() {
  return false;
}

}  // namespace media
