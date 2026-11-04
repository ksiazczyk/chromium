// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Actor one-time token filling service metrics recording
// summary: Records UMA histogram events for OTP retrieval, OTP filling, and superseded callbacks of the actor one-time token filling service.
// ---

#include "chrome/browser/autofill/actor/one_time_tokens/actor_one_time_token_filling_service_metrics.h"

#include "base/metrics/histogram_functions.h"

namespace autofill {

void RecordActorOneTimeTokenFillingServiceRetrieveOtp(
    ActorOneTimeTokenFillingServiceRetrieveOtp event) {
  base::UmaHistogramEnumeration(
      kActorOneTimeTokenFillingServiceRetrieveOtpHistogram, event);
}

void RecordActorOneTimeTokenFillingServiceFillOtp(
    ActorOneTimeTokenFillingServiceFillOtp event) {
  base::UmaHistogramEnumeration(
      kActorOneTimeTokenFillingServiceFillOtpHistogram, event);
}

void RecordActorOtpRetrieveOtpCallbackSuperseded(
    ActorOtpRetrieveOtpCallbackSuperseded event) {
  base::UmaHistogramEnumeration(kActorOtpRetrieveOtpCallbackSupersededHistogram,
                                event);
}

}  // namespace autofill
