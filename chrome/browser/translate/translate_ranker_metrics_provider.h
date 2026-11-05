// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Translate ranker metrics provider header
// summary: Declares a metrics provider and profile observer that reports translate ranker events and controls ranker logging.
// ---

#ifndef CHROME_BROWSER_TRANSLATE_TRANSLATE_RANKER_METRICS_PROVIDER_H_
#define CHROME_BROWSER_TRANSLATE_TRANSLATE_RANKER_METRICS_PROVIDER_H_

#include "chrome/browser/profiles/profile_manager_observer.h"
#include "components/metrics/metrics_provider.h"

namespace translate {

// Provides metrics related to the translate ranker.
class TranslateRankerMetricsProvider : public metrics::MetricsProvider,
                                       public ProfileManagerObserver {
 public:
  TranslateRankerMetricsProvider();

  TranslateRankerMetricsProvider(const TranslateRankerMetricsProvider&) =
      delete;
  TranslateRankerMetricsProvider& operator=(
      const TranslateRankerMetricsProvider&) = delete;

  ~TranslateRankerMetricsProvider() override;

  // From metrics::MetricsProvider.
  void ProvideCurrentSessionData(
      metrics::ChromeUserMetricsExtension* uma_proto) override;
  void OnRecordingEnabled() override;
  void OnRecordingDisabled() override;

  // From ProfileManagerObserver.
  void OnProfileAdded(Profile* profile) override;

 private:
  // Updates the logging state of all ranker instances.
  void UpdateLoggingState();

  // The current state of logging.
  bool logging_enabled_;
};

}  // namespace translate

#endif  // CHROME_BROWSER_TRANSLATE_TRANSLATE_RANKER_METRICS_PROVIDER_H_
