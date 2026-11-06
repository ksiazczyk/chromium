// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PortRef implementation
// summary: Implements PortRef constructors, destructors, and assignment operators that pair a port name with a referenced Port.
// ---

#include "chromeos/ash/components/mojo_proxy/mojo_core/core/ports/port_ref.h"

#include "chromeos/ash/components/mojo_proxy/mojo_core/core/ports/port.h"

namespace mojo_legacy {
namespace core {
namespace ports {

PortRef::~PortRef() = default;

PortRef::PortRef() = default;

PortRef::PortRef(const PortName& name, scoped_refptr<Port> port)
    : name_(name), port_(std::move(port)) {}

PortRef::PortRef(const PortRef& other) = default;

PortRef::PortRef(PortRef&& other) = default;

PortRef& PortRef::operator=(const PortRef& other) = default;

PortRef& PortRef::operator=(PortRef&& other) = default;

}  // namespace ports
}  // namespace core
}  // namespace mojo_legacy
