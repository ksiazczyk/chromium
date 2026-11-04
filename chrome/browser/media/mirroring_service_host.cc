// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MirroringServiceHost base implementation
// summary: Implements the shared parts of the MirroringServiceHost interface, including weak pointer support and UI-thread checks for construction and destruction.
// ---

#include "chrome/browser/media/mirroring_service_host.h"

#include "content/public/browser/browser_thread.h"

namespace mirroring {

base::WeakPtr<MirroringServiceHost> MirroringServiceHost::GetWeakPtr() {
  return weak_factory_.GetWeakPtr();
}

MirroringServiceHost::MirroringServiceHost() = default;

MirroringServiceHost::~MirroringServiceHost() {
  CHECK_CURRENTLY_ON(content::BrowserThread::UI, base::NotFatalUntil::M161);
}

MirroringServiceHostFactory::MirroringServiceHostFactory() = default;

MirroringServiceHostFactory::~MirroringServiceHostFactory() = default;

}  // namespace mirroring
