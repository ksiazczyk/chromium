// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AccountManagerFacade base implementation
// summary: Implements the constructors and destructors of the facade interface and its observer class.
// ---

#include "components/account_manager_core/account_manager_facade.h"

namespace account_manager {

AccountManagerFacade::Observer::Observer() = default;
AccountManagerFacade::Observer::~Observer() = default;

AccountManagerFacade::AccountManagerFacade() = default;
AccountManagerFacade::~AccountManagerFacade() = default;

}  // namespace account_manager
