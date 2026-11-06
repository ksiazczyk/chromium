// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SSL certificate request info implementation
// summary: Implements SSLCertRequestInfo, including Reset, which clears the host, proxy flag, certificate authorities and signature algorithms of a client certificate request.
// ---

#include "net/ssl/ssl_cert_request_info.h"

#include "net/cert/x509_certificate.h"

namespace net {

SSLCertRequestInfo::SSLCertRequestInfo() = default;

void SSLCertRequestInfo::Reset() {
  host_and_port = HostPortPair();
  is_proxy = false;
  cert_authorities.clear();
  signature_algorithms.clear();
}

SSLCertRequestInfo::~SSLCertRequestInfo() = default;

}  // namespace net
