// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock account manager facade definitions
// summary: Defines constructors and destructors for MockAccountManagerFacade and MockAccountManagerFacadeObserver used in Account Manager tests.
// ---

#include "components/account_manager_core/mock_account_manager_facade.h"

namespace account_manager {

MockAccountManagerFacadeObserver::MockAccountManagerFacadeObserver() = default;
MockAccountManagerFacadeObserver::~MockAccountManagerFacadeObserver() = default;

MockAccountManagerFacade::MockAccountManagerFacade() = default;
MockAccountManagerFacade::~MockAccountManagerFacade() = default;

}  // namespace account_manager
