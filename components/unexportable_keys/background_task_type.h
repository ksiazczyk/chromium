// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Background task type enum definition
// summary: Defines the BackgroundTaskType enum of supported background TPM operations, used for histograms, and declares the histogram suffix conversion function.
// ---

#ifndef COMPONENTS_UNEXPORTABLE_KEYS_BACKGROUND_TASK_TYPE_H_
#define COMPONENTS_UNEXPORTABLE_KEYS_BACKGROUND_TASK_TYPE_H_

#include <string_view>

#include "base/component_export.h"

namespace unexportable_keys {

// LINT.IfChange(BackgroundTaskType)
// Enum containing all supported types of background TPM operations.
// These values are primarily used for histograms together with
// `GetBackgroundTaskTypeSuffixForHistograms()` below.
enum class BackgroundTaskType {
  kGetAllKeys,
  kGenerateKey,
  kFromWrappedKey,
  kSign,
  kDeleteKeys,
  kDeleteAllKeys,
  kGenerateAttestationKey,
  kFromWrappedAttestationKey,
  kCertify,
  kSignWithAttestationKey,
};
// LINT.ThenChange(//tools/metrics/histograms/metadata/crypto/histograms.xml:UnexportableKeysBackgroundTaskType)

// Converts `BackgroundTaskType` to a histogram suffix string. The string is
// prepended with "." symbol so it can be directly concatenated with a base
// histogram name.
COMPONENT_EXPORT(UNEXPORTABLE_KEYS)
std::string_view GetBackgroundTaskTypeSuffixForHistograms(
    BackgroundTaskType type);

}  // namespace unexportable_keys

#endif  // COMPONENTS_UNEXPORTABLE_KEYS_BACKGROUND_TASK_TYPE_H_
