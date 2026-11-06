// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default TestApiObserver behavior
// summary: Provides the default OnTestMessage implementation for TestApiObserver, returning false so the observer does not reply to the message.
// ---

#include "extensions/browser/api/test/test_api_observer.h"

namespace extensions {

bool TestApiObserver::OnTestMessage(TestSendMessageFunction* function,
                                    const std::string& message) {
  return false;
}

}  // namespace extensions
