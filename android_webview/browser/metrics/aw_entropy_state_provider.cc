// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebView entropy state provider implementation
// summary: Implements AwEntropyStateProvider, which registers the WebView low entropy source pref and reports it in the system profile metrics.
// relations:
//   - depends_on /android_webview/browser/metrics/aw_entropy_state_provider.h
//   - depends_on /components/prefs/pref_registry_simple.h
//   - depends_on /components/prefs/pref_service.h
// ---

#include "android_webview/browser/metrics/aw_entropy_state_provider.h"

#include "components/prefs/pref_registry_simple.h"
#include "components/prefs/pref_service.h"
#include "third_party/metrics_proto/system_profile.pb.h"

namespace android_webview {

namespace {

// Default value indicating the low entropy source has not been set.
constexpr int kLowEntropySourceNotSet = -1;

}  // namespace

AwEntropyStateProvider::AwEntropyStateProvider(PrefService* local_state)
    : metrics::EntropyStateProvider(local_state), pref_service_(local_state) {}

AwEntropyStateProvider::~AwEntropyStateProvider() = default;

// static
void AwEntropyStateProvider::RegisterPrefs(PrefRegistrySimple* registry) {
  registry->RegisterIntegerPref(prefs::kWebViewLowEntropySource,
                                kLowEntropySourceNotSet);
}

void AwEntropyStateProvider::ProvideSystemProfileMetrics(
    metrics::SystemProfileProto* system_profile) {
  metrics::EntropyStateProvider::ProvideSystemProfileMetrics(system_profile);
  if (pref_service_) {
    int value = pref_service_->GetInteger(prefs::kWebViewLowEntropySource);
    if (value >= 0) {
      system_profile->set_webview_low_entropy_source(value);
    }
  }
}

}  // namespace android_webview
