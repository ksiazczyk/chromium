// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CWVSSLUtil certificate status conversion header
// summary: Declares CWVCertStatusFromNetCertStatus, a helper converting net::CertStatus values to the public CWVCertStatus type.
// ---

#ifndef IOS_WEB_VIEW_INTERNAL_CWV_SSL_UTIL_H_
#define IOS_WEB_VIEW_INTERNAL_CWV_SSL_UTIL_H_

#include "ios/web_view/public/cwv_cert_status.h"
#include "net/cert/cert_status_flags.h"

// Converts net::CertStatus to CWVCertStatus.
CWVCertStatus CWVCertStatusFromNetCertStatus(net::CertStatus cert_status);

#endif  // IOS_WEB_VIEW_INTERNAL_CWV_SSL_UTIL_H_
