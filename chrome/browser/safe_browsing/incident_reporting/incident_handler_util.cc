// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Incident handler hash utility implementation
// summary: Implements HashMessage, which computes a simple hash digest over the serialized form of a protobuf message.
// ---

#include "chrome/browser/safe_browsing/incident_reporting/incident_handler_util.h"

#include <string>

#include "base/hash/hash.h"
#include "base/notreached.h"
#include "third_party/protobuf/src/google/protobuf/message_lite.h"

namespace safe_browsing {

// Computes a simple hash digest over the serialized form of |message|.
// |message| must be in a canonical form.
uint32_t HashMessage(const google::protobuf::MessageLite& message) {
  std::string message_string;
  if (!message.SerializeToString(&message_string)) {
    NOTREACHED();
  }
  return base::Hash(message_string);
}

}  // namespace safe_browsing
