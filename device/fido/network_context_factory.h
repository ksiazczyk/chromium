// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Network context factory type alias
// summary: Defines a repeating callback type in the device namespace that supplies network::mojom::NetworkContext instances for FIDO code.
// ---

#ifndef DEVICE_FIDO_NETWORK_CONTEXT_FACTORY_H_
#define DEVICE_FIDO_NETWORK_CONTEXT_FACTORY_H_

#include "base/functional/callback_forward.h"

namespace network::mojom {
class NetworkContext;
}  // namespace network::mojom

namespace device {
using NetworkContextFactory =
    base::RepeatingCallback<network::mojom::NetworkContext*()>;
}  // namespace device

#endif  // DEVICE_FIDO_NETWORK_CONTEXT_FACTORY_H_
