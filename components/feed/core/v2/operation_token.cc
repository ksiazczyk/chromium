// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Operation token implementation
// summary: Implements OperationToken, a copyable token that tracks whether an Operation is alive using weak pointers, including reset and invalid-token behavior.
// ---

#include "components/feed/core/v2/operation_token.h"

namespace feed {

OperationToken::~OperationToken() = default;
OperationToken::OperationToken(const OperationToken& src) = default;
OperationToken& OperationToken::operator=(const OperationToken& src) = default;
OperationToken::OperationToken(base::WeakPtr<Operation> token)
    : token_(token) {}

// static
OperationToken OperationToken::MakeInvalid() {
  return OperationToken(base::WeakPtr<Operation>{});
}
OperationToken::operator bool() const {
  return token_.MaybeValid();
}
OperationToken::Operation::Operation() = default;
OperationToken::Operation::~Operation() = default;
void OperationToken::Operation::Reset() {
  weak_ptr_factory_.InvalidateWeakPtrs();
}
OperationToken OperationToken::Operation::Token() {
  return OperationToken{weak_ptr_factory_.GetWeakPtr()};
}

}  // namespace feed
