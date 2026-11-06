// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fuchsia swap metrics driver stub
// summary: Provides the Fuchsia SwapMetricsDriver factory, which is not yet implemented and always returns null.
// ---

#include <memory>

#include "base/notimplemented.h"
#include "base/time/time.h"
#include "content/public/browser/swap_metrics_driver.h"

namespace content {

// static
std::unique_ptr<SwapMetricsDriver> SwapMetricsDriver::Create(
    std::unique_ptr<Delegate> delegate,
    const base::TimeDelta update_interval) {
  // TODO(crbug.com/40191902): Implement the driver on Fuchsia.
  NOTIMPLEMENTED_LOG_ONCE();
  return nullptr;
}

}  // namespace content
