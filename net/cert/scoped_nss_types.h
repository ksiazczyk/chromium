// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scoped NSS certificate pointer types
// summary: Defines ScopedCERTCertificate and a list typedef that manage NSS CERTCertificate lifetime via a unique_ptr deleter.
// ---

#ifndef NET_CERT_SCOPED_NSS_TYPES_H_
#define NET_CERT_SCOPED_NSS_TYPES_H_

#include <cert.h>

#include <memory>
#include <vector>

namespace net {

struct FreeCERTCertificate {
  void operator()(CERTCertificate* x) const {
    CERT_DestroyCertificate(x);
  }
};

typedef std::unique_ptr<CERTCertificate, FreeCERTCertificate>
    ScopedCERTCertificate;

using ScopedCERTCertificateList = std::vector<ScopedCERTCertificate>;

}  // namespace net

#endif  // NET_CERT_SCOPED_NSS_TYPES_H_
