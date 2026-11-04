// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock file suggest keyed service observer implementation
// summary: Defines the constructor and destructor of the mock file suggestion service observer used in tests.
// ---

#include "chrome/browser/ash/file_suggest/mock_file_suggest_keyed_service_observer.h"

namespace ash {

MockFileSuggestKeyedServiceObserver::MockFileSuggestKeyedServiceObserver() =
    default;

MockFileSuggestKeyedServiceObserver::~MockFileSuggestKeyedServiceObserver() =
    default;

}  // namespace ash
