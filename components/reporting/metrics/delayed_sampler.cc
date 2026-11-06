// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DelayedSampler implementation
// summary: Implements a sampler wrapper that postpones collection from an owned sampler by a configured delay using a posted task.
// ---

#include "components/reporting/metrics/delayed_sampler.h"

#include <memory>

#include "base/task/sequenced_task_runner.h"
#include "base/time/time.h"
#include "components/reporting/metrics/sampler.h"

namespace reporting {

DelayedSampler::DelayedSampler(std::unique_ptr<Sampler> sampler,
                               base::TimeDelta delay)
    : sampler_(std::move(sampler)), delay_(delay) {}

DelayedSampler::~DelayedSampler() = default;

void DelayedSampler::MaybeCollect(OptionalMetricCallback callback) {
  // Delay collection by `delay_` amount of time
  base::SequencedTaskRunner::GetCurrentDefault()->PostDelayedTask(
      FROM_HERE,
      base::BindOnce(&DelayedSampler::CollectInternal,
                     weak_ptr_factory_.GetWeakPtr(), std::move(callback)),
      delay_);
}

void DelayedSampler::CollectInternal(OptionalMetricCallback callback) {
  sampler_->MaybeCollect(std::move(callback));
}

}  // namespace reporting
