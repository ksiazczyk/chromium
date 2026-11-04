// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Dictation feature flag definitions
// summary: Defines the kDictation feature and its field trial parameters such as eval mode, extension backend choice, and session end behavior.
// ---

#include "chrome/browser/dictation/features.h"

#include <string>

#include "base/metrics/field_trial_params.h"
#include "base/time/time.h"

namespace dictation {

BASE_FEATURE(kDictation, base::FEATURE_DISABLED_BY_DEFAULT);

const base::FeatureParam<bool> kDictationEvalMode{&kDictation, "eval_mode",
                                                  false};

const base::FeatureParam<bool> kUseComponentExtension{
    &kDictation, "use_component_extension", true};

const base::FeatureParam<bool> kSendContextAsync{&kDictation,
                                                 "send_context_async", false};

const base::FeatureParam<bool> kShowPartials{&kDictation, "show_partials",
                                             false};

const base::FeatureParam<bool> kWebSpeechApiBackend{
    &kDictation, "web_speech_api_backend", false};

const base::FeatureParam<bool> kSessionEndsOnStreamEnd{
    &kDictation, "session_ends_on_stream_end", true};

const base::FeatureParam<base::TimeDelta> kAutoSessionEndDelay{
    &kDictation, "auto_session_end_delay", base::Milliseconds(300)};

const base::FeatureParam<std::string> kDictationConnectorTag{
    &kDictation, "connector_tag", ""};

const base::FeatureParam<std::string> kPopulateEditContextHosts{
    &kDictation, "populate_edit_context_hosts", "docs.google.com"};

}  // namespace dictation
