// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: EmptyFilter implementation
// summary: Implements the EmptyFilter, a no-op filter that returns the input position unchanged and reports the empty filter name.
// ---

#include "ui/base/prediction/empty_filter.h"
#include "ui/base/ui_base_features.h"

namespace ui {

EmptyFilter::EmptyFilter() = default;
EmptyFilter::~EmptyFilter() = default;

bool EmptyFilter::Filter(const base::TimeTicks& timestamp,
                         gfx::PointF* position) const {
  return position;
}

const char* EmptyFilter::GetName() const {
  return features::kFilterNameEmpty;
}

}  // namespace ui
