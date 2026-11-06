// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebNN constant operand implementation
// summary: Implements WebNNConstantOperand, which stores and updates the byte data of a constant operand together with its descriptor.
// ---

#include "services/webnn/webnn_constant_operand.h"

namespace webnn {

WebNNConstantOperand::WebNNConstantOperand(OperandDescriptor descriptor,
                                           base::HeapArray<uint8_t> data)
    : descriptor_(std::move(descriptor)), data_(std::move(data)) {
  CHECK_EQ(data_.size(), descriptor_.PackedByteLength());
}

WebNNConstantOperand::~WebNNConstantOperand() = default;

void WebNNConstantOperand::SetData(base::HeapArray<uint8_t>&& data) {
  data_ = std::move(data);
}

}  // namespace webnn
