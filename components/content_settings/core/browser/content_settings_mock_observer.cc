// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock content settings observer implementation
// summary: Provides the constructor and destructor for the gmock-based MockObserver used to track content setting change notifications in tests.
// ---

#include "components/content_settings/core/browser/content_settings_mock_observer.h"

namespace content_settings {

MockObserver::MockObserver() = default;

MockObserver::~MockObserver() = default;

}  // namespace content_settings
