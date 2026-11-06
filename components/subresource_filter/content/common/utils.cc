// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Implementation of subresource filter activation inheritance
// summary: Implements ShouldInheritActivation, which returns true for URLs not handled by the network stack so they inherit subresource filter activation.
// ---

#include "components/subresource_filter/content/common/utils.h"

#include "content/public/common/url_utils.h"
#include "url/gurl.h"

namespace subresource_filter {

bool ShouldInheritActivation(const GURL& url) {
  return !content::IsURLHandledByNetworkStack(url);
}

}  // namespace subresource_filter
