// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Proto time conversion implementation
// summary: Implements conversion between base::Time and the milliseconds-since-Unix-epoch format used in trusted vault protobufs.
// ---

#include "components/trusted_vault/proto_time_conversion.h"

#include "base/time/time.h"

namespace trusted_vault {

int64_t TimeToProtoTime(base::Time time) {
  return (time - base::Time::UnixEpoch()).InMilliseconds();
}

base::Time ProtoTimeToTime(int64_t proto_time) {
  return base::Time::UnixEpoch() + base::Milliseconds(proto_time);
}

}  // namespace trusted_vault
