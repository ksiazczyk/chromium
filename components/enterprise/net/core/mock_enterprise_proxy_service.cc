// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock enterprise proxy service implementation
// summary: Implements observer management and notification of dynamic proxy config status changes for the MockEnterpriseProxyService test double.
// ---

#include "components/enterprise/net/core/mock_enterprise_proxy_service.h"

namespace enterprise_net {

MockEnterpriseProxyService::MockEnterpriseProxyService() = default;

MockEnterpriseProxyService::~MockEnterpriseProxyService() = default;

void MockEnterpriseProxyService::AddObserver(Observer* observer) {
  observers_.AddObserver(observer);
}

void MockEnterpriseProxyService::RemoveObserver(Observer* observer) {
  observers_.RemoveObserver(observer);
}

void MockEnterpriseProxyService::NotifyObservers() {
  observers_.Notify(&Observer::OnDynamicProxyConfigsStatusChanged);
}

}  // namespace enterprise_net
