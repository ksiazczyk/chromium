// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock affiliation service implementation
// summary: Implements the MockAffiliationService test double, including its AsWeakPtr support.
// ---

#include "components/affiliations/core/browser/mock_affiliation_service.h"

namespace affiliations {

MockAffiliationService::MockAffiliationService() = default;

MockAffiliationService::~MockAffiliationService() = default;

base::WeakPtr<AffiliationService> MockAffiliationService::AsWeakPtr() {
  return weak_ptr_factory_.GetWeakPtr();
}

}  // namespace affiliations
