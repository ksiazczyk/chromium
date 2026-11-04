// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: SyncTestAccount enum of fixed test accounts
// summary: Defines a fixed set of server-side accounts, such as consumer and enterprise accounts, available for sign-in in sync integration tests.
// ---

#ifndef CHROME_BROWSER_SYNC_TEST_INTEGRATION_SYNC_TEST_ACCOUNT_H_
#define CHROME_BROWSER_SYNC_TEST_INTEGRATION_SYNC_TEST_ACCOUNT_H_

// A fixed set of server-side accounts that can be used to sign into in
// SyncTest/SyncServiceImplHarness. In doubt, use `kDefaultAccount`.
enum class SyncTestAccount {
  kConsumerAccount1,
  kConsumerAccount2,
  kEnterpriseAccount1,
  kGoogleDotComAccount1,
  kDefaultAccount = kConsumerAccount1
};

#endif  // CHROME_BROWSER_SYNC_TEST_INTEGRATION_SYNC_TEST_ACCOUNT_H_
