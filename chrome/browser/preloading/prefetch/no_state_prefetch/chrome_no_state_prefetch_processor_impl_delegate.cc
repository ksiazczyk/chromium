// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome no-state prefetch processor delegate implementation
// summary: Implements the processor delegate that returns the no-state prefetch link manager for a browser context.
// ---

#include "chrome/browser/preloading/prefetch/no_state_prefetch/chrome_no_state_prefetch_processor_impl_delegate.h"

#include "chrome/browser/preloading/prefetch/no_state_prefetch/no_state_prefetch_link_manager_factory.h"
#include "components/no_state_prefetch/browser/no_state_prefetch_link_manager.h"
#include "content/public/browser/browser_context.h"

namespace prerender {

NoStatePrefetchLinkManager*
ChromeNoStatePrefetchProcessorImplDelegate::GetNoStatePrefetchLinkManager(
    content::BrowserContext* browser_context) {
  return NoStatePrefetchLinkManagerFactory::GetForBrowserContext(
      browser_context);
}

}  // namespace prerender
