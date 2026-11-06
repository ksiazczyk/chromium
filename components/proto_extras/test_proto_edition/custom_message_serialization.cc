// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Custom serialization for CustomSerializedMessage
// summary: Implements ToValue, a custom serializer that converts CustomSerializedMessage protobufs into a base::Value for the proto_extras test setup.
// ---

#include "base/values.h"
#include "components/proto_extras/test_proto_edition/test_proto_edition.pb.h"

namespace proto_extras {

base::Value ToValue(const CustomSerializedMessage& message) {
  return base::Value("custom serialized");
}

}  // namespace proto_extras
