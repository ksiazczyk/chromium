// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SignalsDecorator interface
// summary: Defines the abstract interface for decorators that asynchronously add signals data to Device Trust signals and invoke a done closure.
// ---

#ifndef COMPONENTS_ENTERPRISE_DEVICE_TRUST_CORE_SIGNALS_DECORATORS_COMMON_SIGNALS_DECORATOR_H_
#define COMPONENTS_ENTERPRISE_DEVICE_TRUST_CORE_SIGNALS_DECORATORS_COMMON_SIGNALS_DECORATOR_H_

#include "base/functional/callback.h"
#include "base/values.h"

namespace enterprise_connectors {

// Interface representing instances in charge of decorating DeviceTrustSignals
// instances by adding signals data to them.
class SignalsDecorator {
 public:
  virtual ~SignalsDecorator() = default;

  // Asynchronously sets signals data on the `signals` proto properties and
  // invoked `done_closure` when done.
  virtual void Decorate(base::DictValue& signals,
                        base::OnceClosure done_closure) = 0;
};

}  // namespace enterprise_connectors

#endif  // COMPONENTS_ENTERPRISE_DEVICE_TRUST_CORE_SIGNALS_DECORATORS_COMMON_SIGNALS_DECORATOR_H_
