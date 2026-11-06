// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock browser bound key store for tests
// summary: Implements the constructor and destructor of the gmock-based MockBrowserBoundKeyStore test double.
// ---

#include "components/payments/content/browser_binding/mock_browser_bound_key_store.h"

namespace payments {

MockBrowserBoundKeyStore::MockBrowserBoundKeyStore() = default;

MockBrowserBoundKeyStore::~MockBrowserBoundKeyStore() = default;

}  // namespace payments
