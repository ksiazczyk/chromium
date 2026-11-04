// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScopedPdhQuery implementation
// summary: Implements ScopedPdhQuery::Create, which opens a PDH query handle and records open failures in a sparse histogram.
// ---

#include "base/win/scoped_pdh_query.h"

#include "base/metrics/histogram_functions.h"

namespace base::win {

// static
ScopedPdhQuery ScopedPdhQuery::Create() {
  PDH_HQUERY pdh_query;
  PDH_STATUS pdh_status = ::PdhOpenQuery(NULL, NULL, &pdh_query);
  if (pdh_status == ERROR_SUCCESS) {
    return ScopedPdhQuery(pdh_query);
  }

  base::UmaHistogramSparse(kQueryErrorHistogram, pdh_status);
  return ScopedPdhQuery();
}

}  // namespace base::win
