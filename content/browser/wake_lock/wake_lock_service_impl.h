// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Wake lock service class declaration
// summary: Declares WakeLockServiceImpl, a per-document Mojo service that forwards wake lock requests to the wake lock context.
// ---

#ifndef CONTENT_BROWSER_WAKE_LOCK_WAKE_LOCK_SERVICE_IMPL_H_
#define CONTENT_BROWSER_WAKE_LOCK_WAKE_LOCK_SERVICE_IMPL_H_

#include "content/common/content_export.h"
#include "content/public/browser/document_service.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "third_party/blink/public/mojom/wake_lock/wake_lock.mojom.h"

namespace content {

class CONTENT_EXPORT WakeLockServiceImpl final
    : public DocumentService<blink::mojom::WakeLockService> {
 public:
  static void Create(RenderFrameHost*,
                     mojo::PendingReceiver<blink::mojom::WakeLockService>);

  WakeLockServiceImpl(const WakeLockServiceImpl&) = delete;
  WakeLockServiceImpl& operator=(const WakeLockServiceImpl&) = delete;

  // WakeLockService implementation.
  void GetWakeLock(device::mojom::WakeLockType,
                   device::mojom::WakeLockReason,
                   const std::string&,
                   mojo::PendingReceiver<device::mojom::WakeLock>) final;

 private:
  WakeLockServiceImpl(RenderFrameHost&,
                      mojo::PendingReceiver<blink::mojom::WakeLockService>);
};

}  // namespace content

#endif  // CONTENT_BROWSER_WAKE_LOCK_WAKE_LOCK_SERVICE_IMPL_H_
