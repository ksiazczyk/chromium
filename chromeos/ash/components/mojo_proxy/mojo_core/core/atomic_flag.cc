// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AtomicFlag implementation
// summary: Implements the constructor of the AtomicFlag class, an atomically settable boolean flag used for fast-path checks.
// ---

#include "chromeos/ash/components/mojo_proxy/mojo_core/core/atomic_flag.h"

namespace mojo_legacy {
namespace core {

AtomicFlag::AtomicFlag() : flag_(false) {}

}  // namespace core
}  // namespace mojo_legacy
