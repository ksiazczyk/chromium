// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tracing model implementation
// summary: Implements TracingModel, which stores whether performance tracing is enabled and notifies observers when the tracing mode changes.
// relations:
//   - implements /ash/system/model/tracing_model.h
// ---

#include "ash/system/model/tracing_model.h"

namespace ash {

TracingModel::TracingModel() = default;
TracingModel::~TracingModel() = default;

void TracingModel::AddObserver(TracingObserver* observer) {
  observers_.AddObserver(observer);
}

void TracingModel::RemoveObserver(TracingObserver* observer) {
  observers_.RemoveObserver(observer);
}

void TracingModel::SetIsTracing(bool is_tracing) {
  is_tracing_ = is_tracing;
  NotifyChanged();
}

void TracingModel::NotifyChanged() {
  for (auto& observer : observers_)
    observer.OnTracingModeChanged();
}

}  // namespace ash
