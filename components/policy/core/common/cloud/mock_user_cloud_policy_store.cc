// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock user cloud policy store implementation
// summary: Implements a mock user cloud policy store that runs without backing files for tests.
// ---

#include "components/policy/core/common/cloud/mock_user_cloud_policy_store.h"

#include "base/task/sequenced_task_runner.h"
#include "components/policy/proto/device_management_backend.pb.h"

namespace policy {

MockUserCloudPolicyStore::MockUserCloudPolicyStore(
    const std::string& policy_type)
    : UserCloudPolicyStore(base::FilePath(),
                           base::FilePath(),
                           policy_type,
                           scoped_refptr<base::SequencedTaskRunner>()) {}

MockUserCloudPolicyStore::~MockUserCloudPolicyStore() = default;

}  // namespace policy
