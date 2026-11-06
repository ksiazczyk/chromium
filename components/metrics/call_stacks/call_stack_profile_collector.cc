// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Call stack profile collector implementation
// summary: Implements the Mojo CallStackProfileCollector service that receives sampled profiles from child processes and forwards them to the metrics provider.
// ---

#include "components/metrics/call_stacks/call_stack_profile_collector.h"

#include <memory>
#include <utility>

#include "components/metrics/call_stacks/call_stack_profile_metrics_provider.h"
#include "mojo/public/cpp/bindings/self_owned_receiver.h"

namespace metrics {

CallStackProfileCollector::CallStackProfileCollector() = default;

CallStackProfileCollector::~CallStackProfileCollector() = default;

// static
void CallStackProfileCollector::Create(
    mojo::PendingReceiver<mojom::CallStackProfileCollector> receiver) {
  mojo::MakeSelfOwnedReceiver(std::make_unique<CallStackProfileCollector>(),
                              std::move(receiver));
}

void CallStackProfileCollector::Collect(base::TimeTicks start_timestamp,
                                        mojom::TriggerEvent trigger_event,
                                        mojom::SampledProfilePtr profile) {
  CallStackProfileMetricsProvider::ReceiveSerializedProfile(
      start_timestamp,
      trigger_event == mojom::TriggerEvent::kPeriodicHeapCollection ||
          trigger_event == mojom::TriggerEvent::kPeriodicHeapChurnCollection,
      std::move(profile));
}

}  // namespace metrics
