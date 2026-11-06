// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Top bucket domains header
// summary: Declares the kTopBucketEditDistanceSkeletons span holding skeletons of top bucket domains used in edit distance spoof checks.
// ---

#ifndef COMPONENTS_URL_FORMATTER_SPOOF_CHECKS_TOP_DOMAINS_TOP_BUCKET_DOMAINS_H_
#define COMPONENTS_URL_FORMATTER_SPOOF_CHECKS_TOP_DOMAINS_TOP_BUCKET_DOMAINS_H_

#include "base/containers/span.h"

namespace top_bucket_domains {

extern const base::span<const char* const> kTopBucketEditDistanceSkeletons;

}  // namespace top_bucket_domains

#endif  // COMPONENTS_URL_FORMATTER_SPOOF_CHECKS_TOP_DOMAINS_TOP_BUCKET_DOMAINS_H_
