// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Memory usage estimator template instantiations
// summary: Provides explicit template instantiations of EstimateMemoryUsage for std::string and std::u16string.
// ---

#include "base/trace_event/memory_usage_estimator.h"

namespace base::trace_event {

template size_t EstimateMemoryUsage(const std::string&);
template size_t EstimateMemoryUsage(const std::u16string&);

}  // namespace base::trace_event
