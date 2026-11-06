// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Prefetch probe result helpers
// summary: Implements the PrefetchProbeResultIsSuccess helper that classifies origin probe results as success or failure.
// ---

#include "content/browser/preloading/prefetch/prefetch_probe_result.h"

#include "base/notreached.h"

namespace content {

bool PrefetchProbeResultIsSuccess(PrefetchProbeResult result) {
  switch (result) {
    case PrefetchProbeResult::kNoProbing:
    case PrefetchProbeResult::kDNSProbeSuccess:
    case PrefetchProbeResult::kTLSProbeSuccess:
      return true;
    case PrefetchProbeResult::kTLSProbeFailure:
    case PrefetchProbeResult::kDNSProbeFailure:
      return false;
  }
  NOTREACHED();
}

}  // namespace content
