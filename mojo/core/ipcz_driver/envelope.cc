// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Envelope implementation
// summary: Implements the Envelope object that keeps platform-specific data such as a Mach send right voucher alive while a message is processed on Apple platforms.
// ---

#include "mojo/core/ipcz_driver/envelope.h"

#if BUILDFLAG(MOJO_USE_APPLE_CHANNEL)
#include <utility>

#include "base/trace_event/typed_macros.h"
#endif

namespace mojo::core::ipcz_driver {

Envelope::Envelope() = default;

#if BUILDFLAG(MOJO_USE_APPLE_CHANNEL)
Envelope::Envelope(base::apple::ScopedMachSendRight voucher)
    : voucher_(std::move(voucher)) {}
#endif

Envelope::~Envelope() = default;

void Envelope::Close() {
#if BUILDFLAG(MOJO_USE_APPLE_CHANNEL)
  TRACE_EVENT("ipc", "Release QoS Voucher");
  voucher_.reset();
#endif
}

}  // namespace mojo::core::ipcz_driver
