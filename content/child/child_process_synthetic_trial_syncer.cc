// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Child process synthetic trial syncer implementation
// summary: Implements the child-process endpoint that receives synthetic trial groups over Mojo and updates variations crash keys when trials are added, updated or removed.
// ---

#include "content/child/child_process_synthetic_trial_syncer.h"

#include "base/no_destructor.h"
#include "components/variations/variations_crash_keys.h"
#include "mojo/public/cpp/bindings/self_owned_receiver.h"

namespace content {

ChildProcessSyntheticTrialSyncer::ChildProcessSyntheticTrialSyncer() = default;
ChildProcessSyntheticTrialSyncer::~ChildProcessSyntheticTrialSyncer() = default;

void ChildProcessSyntheticTrialSyncer::Create(
    mojo::PendingReceiver<mojom::SyntheticTrialConfiguration> receiver) {
  mojo::MakeSelfOwnedReceiver(
      std::make_unique<ChildProcessSyntheticTrialSyncer>(),
      std::move(receiver));
}

std::unique_ptr<ChildProcessSyntheticTrialSyncer>
ChildProcessSyntheticTrialSyncer::CreateInstanceForTesting() {
  return std::make_unique<ChildProcessSyntheticTrialSyncer>();
}

void ChildProcessSyntheticTrialSyncer::AddOrUpdateSyntheticTrialGroups(
    std::vector<mojom::SyntheticTrialGroupPtr> trial_groups) {
  for (const auto& it : trial_groups) {
    AddOrUpdateTrialGroupInternal(it->trial_name, it->group_name);
  }
  variations::UpdateCrashKeysWithSyntheticTrials(trials_);
}

void ChildProcessSyntheticTrialSyncer::RemoveSyntheticTrialGroups(
    std::vector<mojom::SyntheticTrialGroupPtr> trial_groups) {
  std::vector<variations::SyntheticTrialGroup> new_trials;

  for (auto& trial : trials_) {
    auto find_it =
        std::find_if(trial_groups.begin(), trial_groups.end(),
                     [&trial](mojom::SyntheticTrialGroupPtr& ptr) {
                       return ptr->trial_name == trial.trial_name() &&
                              ptr->group_name == trial.group_name();
                     });
    if (find_it != trial_groups.end()) {
      continue;
    }
    new_trials.push_back(trial);
  }
  trials_.swap(new_trials);
  variations::UpdateCrashKeysWithSyntheticTrials(trials_);
}

void ChildProcessSyntheticTrialSyncer::AddOrUpdateTrialGroupInternal(
    const std::string& trial_name,
    const std::string& group_name) {
  for (auto& trial : trials_) {
    if (trial.trial_name() == trial_name) {
      trial.SetGroupName(group_name);
      return;
    }
  }

  trials_.emplace_back(trial_name, group_name,
                       variations::SyntheticTrialAnnotationMode::kCurrentLog);
}

}  // namespace content
