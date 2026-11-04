// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab lifecycle unit external implementation
// summary: Implements TabLifecycleUnitExternal::FromWebContents, resolving the external tab lifecycle interface for a WebContents via the tab lifecycle unit source.
// ---

#include "chrome/browser/resource_coordinator/tab_lifecycle_unit_external.h"

#include "chrome/browser/resource_coordinator/tab_lifecycle_unit_source.h"
#include "chrome/browser/resource_coordinator/utils.h"

namespace resource_coordinator {

// static
TabLifecycleUnitExternal* TabLifecycleUnitExternal::FromWebContents(
    content::WebContents* web_contents) {
  return GetTabLifecycleUnitSource()->GetTabLifecycleUnitExternal(web_contents);
}

}  // namespace resource_coordinator
