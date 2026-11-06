// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MathService implementation
// summary: Implements the MathService Mojo service, whose Divide method responds to the caller with the quotient of the given integers.
// ---

#include "math_service.h"

namespace math {

MathService::MathService(mojo::PendingReceiver<mojom::MathService> receiver)
    : receiver_(this, std::move(receiver)) {}

MathService::~MathService() = default;

void MathService::Divide(int32_t dividend,
                         int32_t divisor,
                         DivideCallback callback) {
  // Respond with the quotient!
  std::move(callback).Run(dividend / divisor);
}

}  // namespace math
