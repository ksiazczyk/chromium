// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Primary page deactivation callback registration API
// summary: Declares RegisterPrimaryPageDeactivationCallback, which registers a once-run callback fired when a primary page stops being primary or is destroyed.
// ---

#ifndef CHROME_BROWSER_UI_CONTENT_SETTINGS_PRIMARY_PAGE_DEACTIVATION_HELPER_H_
#define CHROME_BROWSER_UI_CONTENT_SETTINGS_PRIMARY_PAGE_DEACTIVATION_HELPER_H_

#include "base/functional/callback_forward.h"

namespace content {
class Page;
}

namespace chrome {

// Registers a callback to be run when `page` (which must be primary) stops
// being the primary page or is destroyed (e.g. when the WebContents is
// destroyed).
// The callback is run at most once.
// Under the hood, this creates a self-destroying WebContentsObserver.
void RegisterPrimaryPageDeactivationCallback(content::Page& page,
                                             base::OnceClosure callback);

}  // namespace chrome

#endif  // CHROME_BROWSER_UI_CONTENT_SETTINGS_PRIMARY_PAGE_DEACTIVATION_HELPER_H_
