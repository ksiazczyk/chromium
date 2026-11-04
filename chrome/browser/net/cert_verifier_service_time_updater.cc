// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cert verifier service time updater implementation
// summary: Implements CertVerifierServiceTimeUpdater, which pushes network time updates from the NetworkTimeTracker to the cert verifier service.
// ---

#include "chrome/browser/net/cert_verifier_service_time_updater.h"

#include "base/time/time.h"
#include "components/network_time/network_time_tracker.h"
#include "components/network_time/time_tracker/time_tracker.h"
#include "content/public/browser/network_service_instance.h"
#include "services/cert_verifier/public/mojom/cert_verifier_service_factory.mojom.h"

CertVerifierServiceTimeUpdater::CertVerifierServiceTimeUpdater(
    network_time::NetworkTimeTracker* tracker)
    : network_time::NetworkTimeTracker::NetworkTimeObserver(tracker) {
  // If the time is already available on construction, do an immediate update.
  network_time::TimeTracker::TimeTrackerState state;
  if (tracker->GetTrackerState(&state)) {
    content::GetCertVerifierServiceFactory()->UpdateNetworkTime(
        state.system_time, state.system_ticks, state.known_time,
        state.uncertainty);
  }
}

CertVerifierServiceTimeUpdater::~CertVerifierServiceTimeUpdater() = default;

void CertVerifierServiceTimeUpdater::OnNetworkTimeChanged(
    network_time::TimeTracker::TimeTrackerState state) {
  content::GetCertVerifierServiceFactory()->UpdateNetworkTime(
      state.system_time, state.system_ticks, state.known_time,
      state.uncertainty);
}
