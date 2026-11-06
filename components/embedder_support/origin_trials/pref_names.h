// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Origin trials preference name constants header
// summary: Declares embedder_support::prefs constants for origin trial preference names, covering the public key, disabled features, and disabled tokens settings.
// ---

#ifndef COMPONENTS_EMBEDDER_SUPPORT_ORIGIN_TRIALS_PREF_NAMES_H_
#define COMPONENTS_EMBEDDER_SUPPORT_ORIGIN_TRIALS_PREF_NAMES_H_

namespace embedder_support {
namespace prefs {

extern const char kOriginTrialPublicKey[];
extern const char kOriginTrialDisabledFeatures[];
extern const char kOriginTrialDisabledTokens[];

}  // namespace prefs
}  // namespace embedder_support

#endif  // COMPONENTS_EMBEDDER_SUPPORT_ORIGIN_TRIALS_PREF_NAMES_H_
