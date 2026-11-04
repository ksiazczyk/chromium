// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Utilities for the SafeBrowsing download protection unit tests.

// ---docerion
// type: test
// title: Header for download protection test utilities
// summary: Declares the ReadTestCertificate helper used by Safe Browsing download protection unit tests.
// ---

#ifndef CHROME_BROWSER_SAFE_BROWSING_DOWNLOAD_PROTECTION_DOWNLOAD_PROTECTION_UNITTEST_UTIL_H_
#define CHROME_BROWSER_SAFE_BROWSING_DOWNLOAD_PROTECTION_DOWNLOAD_PROTECTION_UNITTEST_UTIL_H_

#include <string>

#include "base/files/file_path.h"
#include "base/memory/scoped_refptr.h"
#include "net/cert/x509_certificate.h"

namespace net {
class X509Certificate;
}  // namespace net

scoped_refptr<net::X509Certificate> ReadTestCertificate(
    base::FilePath test_cert_path,
    const std::string& filename);

#endif  // CHROME_BROWSER_SAFE_BROWSING_DOWNLOAD_PROTECTION_DOWNLOAD_PROTECTION_UNITTEST_UTIL_H_
