// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockTabInterface implementation
// summary: Implements a gmock MockTabInterface that routes GetUnownedUserDataHost calls to a default host so tests need not stub the method manually.
// ---

#include "components/tabs/public/mock_tab_interface.h"

namespace tabs {

MockTabInterface::MockTabInterface() {
  // Route both const-overloads of GetUnownedUserDataHost() to a real host by
  // default. gmock cannot synthesize a default action for a reference return
  // type, so without this every test doing an UnownedUserData lookup had to
  // stub the method manually. Tests may still override this with their own
  // ON_CALL, which takes precedence over this default.
  ON_CALL(*this, GetUnownedUserDataHost())
      .WillByDefault(::testing::ReturnRef(default_unowned_user_data_host_));
  ON_CALL(::testing::Const(*this), GetUnownedUserDataHost())
      .WillByDefault(::testing::ReturnRef(default_unowned_user_data_host_));
}

MockTabInterface::~MockTabInterface() = default;

}  // namespace tabs
