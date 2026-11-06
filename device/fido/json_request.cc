// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: JSONRequest implementation
// summary: Implements the constructor and destructor of JSONRequest, a small wrapper holding a base::Value for JSON request data.
// ---

#include "device/fido/json_request.h"

#include "base/values.h"

namespace device {

JSONRequest::JSONRequest(base::Value json)
    : value(std::make_unique<base::Value>(std::move(json))) {}
JSONRequest::~JSONRequest() = default;

}  // namespace device
