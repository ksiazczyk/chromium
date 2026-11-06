// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Connector delegate interface for tracing
// summary: Defines an abstract delegate interface for binding specific Mojo interfaces such as the tracing consumer host.
// ---

#ifndef COMPONENTS_UI_DEVTOOLS_CONNECTOR_DELEGATE_H_
#define COMPONENTS_UI_DEVTOOLS_CONNECTOR_DELEGATE_H_

#include "services/tracing/public/mojom/perfetto_service.mojom.h"

namespace ui_devtools {

// This is a delegate connector that has individual methods for specific
// interfaces that you need to acquire.
class ConnectorDelegate {
 public:
  ConnectorDelegate() = default;

  ConnectorDelegate(const ConnectorDelegate&) = delete;
  ConnectorDelegate& operator=(const ConnectorDelegate&) = delete;

  virtual ~ConnectorDelegate() = default;

  virtual void BindTracingConsumerHost(
      mojo::PendingReceiver<tracing::mojom::ConsumerHost> receiver) = 0;
};

}  // namespace ui_devtools

#endif  // COMPONENTS_UI_DEVTOOLS_CONNECTOR_DELEGATE_H_
