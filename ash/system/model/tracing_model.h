// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Ash system tracing model header
// summary: Declares the Ash TracingModel and TracingObserver classes that track whether performance tracing is enabled and notify observers when the tracing mode changes.
// relations:
//   - depends_on /base/observer_list.h
// ---

#ifndef ASH_SYSTEM_MODEL_TRACING_MODEL_H_
#define ASH_SYSTEM_MODEL_TRACING_MODEL_H_

#include "ash/ash_export.h"
#include "base/observer_list.h"

namespace ash {

class ASH_EXPORT TracingObserver {
 public:
  virtual ~TracingObserver() {}

  // Notifies when tracing mode changes.
  virtual void OnTracingModeChanged() = 0;
};

// Model to store whether users enable performance tracing at chrome://slow.
class ASH_EXPORT TracingModel {
 public:
  TracingModel();

  TracingModel(const TracingModel&) = delete;
  TracingModel& operator=(const TracingModel&) = delete;

  ~TracingModel();

  void AddObserver(TracingObserver* observer);
  void RemoveObserver(TracingObserver* observer);

  void SetIsTracing(bool is_tracing);

  bool is_tracing() const { return is_tracing_; }

 private:
  void NotifyChanged();

  // True if performance tracing is enabled.
  bool is_tracing_ = false;

  base::ObserverList<TracingObserver>::Unchecked observers_;
};

}  // namespace ash

#endif  // ASH_SYSTEM_MODEL_TRACING_MODEL_H_
