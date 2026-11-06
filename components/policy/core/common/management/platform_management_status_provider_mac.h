// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mac domain enrollment and MDM status provider header
// summary: Declares the Mac DomainEnrollmentStatusProvider and EnterpriseMDMManagementStatusProvider classes used to report local domain and cloud MDM authorities.
// ---

#ifndef COMPONENTS_POLICY_CORE_COMMON_MANAGEMENT_PLATFORM_MANAGEMENT_STATUS_PROVIDER_MAC_H_
#define COMPONENTS_POLICY_CORE_COMMON_MANAGEMENT_PLATFORM_MANAGEMENT_STATUS_PROVIDER_MAC_H_

#include "base/enterprise_util.h"
#include "components/policy/core/common/management/management_service.h"
#include "components/policy/policy_export.h"

namespace policy {

class POLICY_EXPORT DomainEnrollmentStatusProvider final
    : public ManagementStatusProvider {
 public:
  DomainEnrollmentStatusProvider();
  ~DomainEnrollmentStatusProvider() final;

 protected:
  // ManagementStatusProvider impl
  EnterpriseManagementAuthority FetchAuthority() final;

 private:
  base::DeviceUserDomainJoinState domain_join_state_;
};

class POLICY_EXPORT EnterpriseMDMManagementStatusProvider final
    : public ManagementStatusProvider {
 public:
  EnterpriseMDMManagementStatusProvider();
  ~EnterpriseMDMManagementStatusProvider() final;

 protected:
  // ManagementStatusProvider impl
  EnterpriseManagementAuthority FetchAuthority() final;
};

}  // namespace policy

#endif  // COMPONENTS_POLICY_CORE_COMMON_MANAGEMENT_PLATFORM_MANAGEMENT_STATUS_PROVIDER_MAC_H_
