// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ResponseHeadUpdateParams class declaration
// summary: Declares ResponseHeadUpdateParams, which carries load timing and service worker router info used to update UrlResponseHead when loading is delegated to another loader.
// ---

#ifndef CONTENT_BROWSER_LOADER_RESPONSE_HEAD_UPDATE_PARAMS_H_
#define CONTENT_BROWSER_LOADER_RESPONSE_HEAD_UPDATE_PARAMS_H_

#include "content/common/content_export.h"
#include "net/base/load_timing_info.h"
#include "services/network/public/mojom/service_worker_router_info.mojom.h"

namespace content {

// Response header parameters that are used to update UrlResponseHead when the
// loading process is delegated from the other loader (for example, through
// network fallback by service workers.)
struct CONTENT_EXPORT ResponseHeadUpdateParams {
  ResponseHeadUpdateParams();
  ~ResponseHeadUpdateParams();

  ResponseHeadUpdateParams(ResponseHeadUpdateParams&& other);
  ResponseHeadUpdateParams& operator=(ResponseHeadUpdateParams&& other);

  net::LoadTimingInfo load_timing_info;
  network::mojom::ServiceWorkerRouterInfoPtr router_info;
  std::optional<network::mojom::ServiceWorkerStatus>
      initial_service_worker_status;
  bool is_synthetic_response_dry_run_mode = false;
};

}  // namespace content

#endif  // CONTENT_BROWSER_LOADER_RESPONSE_HEAD_UPDATE_PARAMS_H_
