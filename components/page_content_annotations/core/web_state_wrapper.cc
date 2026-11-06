// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebStateWrapper implementation
// summary: Implements the constructor and destructor of the WebStateWrapper struct that carries off-the-record state, URL, navigation timestamp and visibility.
// ---

#include "components/page_content_annotations/core/web_state_wrapper.h"

namespace page_content_annotations {

WebStateWrapper::WebStateWrapper(bool is_off_the_record,
                                 const GURL& last_committed_url,
                                 const base::Time& navigation_timestamp,
                                 PageContentVisibility visibility)
    : is_off_the_record(is_off_the_record),
      last_committed_url(last_committed_url),
      navigation_timestamp(navigation_timestamp),
      visibility(visibility) {}

WebStateWrapper::~WebStateWrapper() = default;

}  // namespace page_content_annotations
