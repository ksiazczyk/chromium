// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Client certificate feature flags
// summary: Defines base::Feature flags controlling prefs-based certificate storage and Windows software key and TPM TLS 1.3 compatibility behavior.
// ---

#include "components/enterprise/client_certificates/core/features.h"

namespace client_certificates::features {


BASE_FEATURE(kManagedUserClientCertificateInPrefs,
             base::FEATURE_DISABLED_BY_DEFAULT);

bool IsManagedUserClientCertificateInPrefsEnabled() {
  return base::FeatureList::IsEnabled(kManagedUserClientCertificateInPrefs);
}

#if BUILDFLAG(IS_WIN)
BASE_FEATURE(kWindowsSoftwareKeysEnabled, base::FEATURE_ENABLED_BY_DEFAULT);

bool AreWindowsSoftwareKeysEnabled() {
  return base::FeatureList::IsEnabled(kWindowsSoftwareKeysEnabled);
}

BASE_FEATURE(kWindowsTpmTls13Check, base::FEATURE_ENABLED_BY_DEFAULT);

bool IsWindowsTpmTls13CheckEnabled() {
  return base::FeatureList::IsEnabled(kWindowsTpmTls13Check);
}
#endif  // BUILDFLAG(IS_WIN)

}  // namespace client_certificates::features
