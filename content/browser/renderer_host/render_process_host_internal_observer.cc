// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: RenderProcessHostInternalObserver implementation
// summary: Provides the destructor for the internal RenderProcessHost observer, checking that observers remove themselves from observer lists before destruction.
// ---

#include "content/browser/renderer_host/render_process_host_internal_observer.h"

#include "base/check.h"
#include "base/observer_list_types.h"

namespace content {

RenderProcessHostInternalObserver::~RenderProcessHostInternalObserver() {
  CHECK(!IsInObserverList(), base::NotFatalUntil::M152);
}

}  // namespace content
