// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock Mojo IndexedDB factory client implementation
// summary: Implements MockMojoFactoryClient, a gmock mock of the Mojo IDBFactoryClient interface that binds a receiver and passes a remote for IndexedDB tests.
// ---

#include "content/browser/indexed_db/mock_mojo_indexed_db_factory_client.h"

namespace content::indexed_db {

MockMojoFactoryClient::MockMojoFactoryClient() = default;
MockMojoFactoryClient::~MockMojoFactoryClient() = default;

mojo::PendingAssociatedRemote<blink::mojom::IDBFactoryClient>
MockMojoFactoryClient::CreateInterfacePtrAndBind() {
  return receiver_.BindNewEndpointAndPassRemote();
}

}  // namespace content::indexed_db
