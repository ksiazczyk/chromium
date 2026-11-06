// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock facilitated payments app info list implementation
// summary: Implements the constructor and destructor of MockFacilitatedPaymentsAppInfoList, the GMock test double for FacilitatedPaymentsAppInfoList.
// ---

#include "components/facilitated_payments/core/browser/mock_facilitated_payments_app_info_list.h"

namespace payments::facilitated {

MockFacilitatedPaymentsAppInfoList::MockFacilitatedPaymentsAppInfoList() =
    default;

MockFacilitatedPaymentsAppInfoList::~MockFacilitatedPaymentsAppInfoList() =
    default;

}  // namespace payments::facilitated
