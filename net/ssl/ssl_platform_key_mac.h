// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: macOS SSL platform key declarations
// summary: Declares functions to create an SSLPrivateKey backed by a macOS SecKey or an unexportable signing key for client certificate authentication.
// ---

#ifndef NET_SSL_SSL_PLATFORM_KEY_MAC_H_
#define NET_SSL_SSL_PLATFORM_KEY_MAC_H_

#include <Security/SecBase.h>

#include "base/memory/scoped_refptr.h"
#include "crypto/unexportable_key.h"
#include "net/base/net_export.h"

namespace net {

class SSLPrivateKey;
class X509Certificate;

// Returns an `SSLPrivateKey` backed by the platform private key in `key`, which
// must correspond to `certificate`'s public key.
NET_EXPORT scoped_refptr<SSLPrivateKey> CreateSSLPrivateKeyForSecKey(
    const X509Certificate* certificate,
    SecKeyRef key);

// Returns an `SSLPrivateKey` backed by the platform private key contained in
// `unexportable_key`.
NET_EXPORT scoped_refptr<SSLPrivateKey> WrapUnexportableKey(
    const crypto::UnexportableSigningKey& unexportable_key);

}  // namespace net

#endif  // NET_SSL_SSL_PLATFORM_KEY_MAC_H_
