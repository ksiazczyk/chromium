// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock profile ID delegate implementation
// summary: Implements the constructor and destructor of the mocked ProfileIdDelegate used as test support.
// ---

#include "components/enterprise/browser/identifiers/mock_profile_id_delegate.h"

namespace enterprise::test {

MockProfileIdDelegate::MockProfileIdDelegate() = default;
MockProfileIdDelegate::~MockProfileIdDelegate() = default;

}  // namespace enterprise::test
