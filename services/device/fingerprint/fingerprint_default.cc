// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default no-op fingerprint implementation
// summary: Provides an empty Fingerprint implementation used on platforms where real fingerprint support is unavailable.
// ---

#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "services/device/fingerprint/fingerprint.h"
#include "services/device/public/mojom/fingerprint.mojom.h"

namespace device {

namespace {

// An empty implementation of Fingerprint.
// Used on platforms where a real implementation is not available.
class FingerprintDefault : public Fingerprint {
 public:
  explicit FingerprintDefault() {}
  ~FingerprintDefault() {}
};

}  // namespace

// static
void Fingerprint::Create(
    mojo::PendingReceiver<device::mojom::Fingerprint> receiver) {
  // Do nothing.
}

}  // namespace device
