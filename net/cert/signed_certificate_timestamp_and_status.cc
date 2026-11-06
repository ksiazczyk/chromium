// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SCT and status pair implementation
// summary: Implements constructors and the destructor for SignedCertificateTimestampAndStatus, which pairs an SCT with its verification status.
// ---

#include "net/cert/signed_certificate_timestamp_and_status.h"

#include "net/cert/signed_certificate_timestamp.h"

namespace net {

SignedCertificateTimestampAndStatus::SignedCertificateTimestampAndStatus() =
    default;

SignedCertificateTimestampAndStatus::SignedCertificateTimestampAndStatus(
    const scoped_refptr<ct::SignedCertificateTimestamp>& sct,
    const ct::SCTVerifyStatus status)
    : sct(sct), status(status) {}

SignedCertificateTimestampAndStatus::SignedCertificateTimestampAndStatus(
    const SignedCertificateTimestampAndStatus& other) = default;

SignedCertificateTimestampAndStatus::~SignedCertificateTimestampAndStatus() =
    default;

}  // namespace net
