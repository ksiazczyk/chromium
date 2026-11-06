// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ORT context provider header
// summary: Declares ShouldTryCreateOrtContext, used to decide whether ORT-based WebNN context creation should be attempted.
// ---

#ifndef SERVICES_WEBNN_ORT_CONTEXT_PROVIDER_ORT_H_
#define SERVICES_WEBNN_ORT_CONTEXT_PROVIDER_ORT_H_

namespace webnn {

namespace ort {

// Returns true if CreateContext requests should be attempted by the ORT-based
// WebNN context implementation.
bool ShouldTryCreateOrtContext();

}  // namespace ort

}  // namespace webnn

#endif  // SERVICES_WEBNN_ORT_CONTEXT_PROVIDER_ORT_H_
