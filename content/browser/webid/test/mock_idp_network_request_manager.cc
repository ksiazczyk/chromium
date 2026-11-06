// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock IdP network request manager implementation
// summary: Implements the constructor and destructor of MockIdpNetworkRequestManager, initializing the base IdpNetworkRequestManager with default origins and state.
// ---

#include "content/browser/webid/test/mock_idp_network_request_manager.h"

#include "content/public/browser/weak_document_ptr.h"
#include "services/network/public/mojom/client_security_state.mojom.h"

namespace content {

MockIdpNetworkRequestManager::MockIdpNetworkRequestManager()
    : IdpNetworkRequestManager(url::Origin(),
                               url::Origin(),
                               nullptr,
                               nullptr,
                               network::mojom::ClientSecurityState::New(),
                               FrameTreeNodeId(),
                               WeakDocumentPtr()) {}

MockIdpNetworkRequestManager::~MockIdpNetworkRequestManager() = default;

}  // namespace content
