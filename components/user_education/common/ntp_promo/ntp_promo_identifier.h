// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NTP promo identifier type alias
// summary: Defines the NtpPromoIdentifier type, a string handle used to reference New Tab Page promos.
// ---

#ifndef COMPONENTS_USER_EDUCATION_COMMON_NTP_PROMO_NTP_PROMO_IDENTIFIER_H_
#define COMPONENTS_USER_EDUCATION_COMMON_NTP_PROMO_NTP_PROMO_IDENTIFIER_H_

#include <string>

namespace user_education {

// NtpPromoIdentifier is used as a handle for new tab page promos.
using NtpPromoIdentifier = std::string;

}  // namespace user_education

#endif  // COMPONENTS_USER_EDUCATION_COMMON_NTP_PROMO_NTP_PROMO_IDENTIFIER_H_
