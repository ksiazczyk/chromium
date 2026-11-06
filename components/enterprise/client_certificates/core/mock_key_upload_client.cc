// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock key upload client implementation
// summary: Implements the constructor and destructor of the MockKeyUploadClient test double used in unit tests.
// ---

#include "components/enterprise/client_certificates/core/mock_key_upload_client.h"

namespace client_certificates {

MockKeyUploadClient::MockKeyUploadClient() = default;
MockKeyUploadClient::~MockKeyUploadClient() = default;

}  // namespace client_certificates
