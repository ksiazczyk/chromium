// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Content capture feature flags implementation
// summary: Implements content capture feature checks, including platform enablement and the metadata-for-data-share feature flag.
// ---

#include "components/content_capture/common/content_capture_features.h"

#include "base/feature_list.h"
#include "build/build_config.h"

namespace content_capture::features {
namespace {
constexpr int kTaskInitialDelayMs = 500;

}  // namespace

BASE_FEATURE(kContentCaptureSendMetadataForDataShare,
             base::FEATURE_DISABLED_BY_DEFAULT);

bool IsContentCaptureEnabled() {
#if BUILDFLAG(IS_ANDROID)
  return true;
#else
  return false;
#endif
}

bool ShouldSendMetadataForDataShare() {
  return base::FeatureList::IsEnabled(kContentCaptureSendMetadataForDataShare);
}

int TaskInitialDelayInMilliseconds() {
  return kTaskInitialDelayMs;
}

}  // namespace content_capture::features
