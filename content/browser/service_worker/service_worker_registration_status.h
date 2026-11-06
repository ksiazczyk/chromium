// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Service worker registration status header
// summary: Declares the helper that converts non-OK service worker status codes into registration error types and messages.
// ---

#ifndef CONTENT_BROWSER_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_STATUS_H_
#define CONTENT_BROWSER_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_STATUS_H_

#include <string>

#include "third_party/blink/public/common/service_worker/service_worker_status_code.h"
#include "third_party/blink/public/platform/modules/service_worker/web_service_worker_error.h"

namespace content {

// This should only be called for errors, where status != OK.
void GetServiceWorkerErrorTypeForRegistration(
    blink::ServiceWorkerStatusCode status,
    const std::string& status_message,
    blink::mojom::ServiceWorkerErrorType* out_error,
    std::string* out_message);

}  // namespace content

#endif  // CONTENT_BROWSER_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_STATUS_H_
