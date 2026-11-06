// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Policy base implementation
// summary: Implements the Policy interface default InvalidSyscall, returning an ENOSYS error result.
// ---

#include "sandbox/linux/bpf_dsl/policy.h"

#include <errno.h>

#include "sandbox/linux/bpf_dsl/bpf_dsl.h"

namespace sandbox {
namespace bpf_dsl {

ResultExpr Policy::InvalidSyscall() const {
  return Error(ENOSYS);
}

}  // namespace bpf_dsl
}  // namespace sandbox
