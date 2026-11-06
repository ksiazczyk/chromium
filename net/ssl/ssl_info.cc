// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SSLInfo implementation
// summary: Implements the constructors, assignment operators and destructor for the SSLInfo class that carries SSL connection details.
// ---

#include "net/ssl/ssl_info.h"

#include "net/cert/x509_certificate.h"

namespace net {

SSLInfo::SSLInfo() = default;

SSLInfo::SSLInfo(const SSLInfo& info) = default;

SSLInfo::SSLInfo(SSLInfo&& info) = default;

SSLInfo& SSLInfo::operator=(const SSLInfo& info) = default;

SSLInfo& SSLInfo::operator=(SSLInfo&& info) = default;

SSLInfo::~SSLInfo() = default;

}  // namespace net
