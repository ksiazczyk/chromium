// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Request canceler implementation
// summary: Implements RequestCanceler, which holds a weak pointer to a CancelableRequest so the request can be canceled when it is no longer valid.
// ---

#include "components/safe_browsing/core/browser/password_protection/request_canceler.h"

namespace safe_browsing {

CancelableRequest::~CancelableRequest() = default;

RequestCanceler::RequestCanceler(base::WeakPtr<CancelableRequest> request)
    : request_(request) {}

RequestCanceler::~RequestCanceler() = default;

}  // namespace safe_browsing