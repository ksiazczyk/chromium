// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Certificate broker class declaration
// summary: Declares CertificateBrokerImpl, which implements mojom::CertificateBroker to retrieve client certificates and expose private key operations.
// ---

#ifndef REMOTING_HOST_CERTIFICATE_BROKER_IMPL_H_
#define REMOTING_HOST_CERTIFICATE_BROKER_IMPL_H_

#include <memory>

#include "base/functional/callback.h"
#include "net/ssl/client_cert_identity.h"
#include "net/ssl/client_cert_store.h"
#include "remoting/host/mojom/remoting_host.mojom.h"

namespace remoting {

// Implements mojom::CertificateBroker by querying the platform certificate
// store and brokering private key operations via SSLPrivateKeyWrapper.
class CertificateBrokerImpl : public mojom::CertificateBroker {
 public:
  using CreateClientCertStoreCallback =
      base::RepeatingCallback<std::unique_ptr<net::ClientCertStore>()>;

  CertificateBrokerImpl();
  explicit CertificateBrokerImpl(
      CreateClientCertStoreCallback create_client_cert_store_callback);

  CertificateBrokerImpl(const CertificateBrokerImpl&) = delete;
  CertificateBrokerImpl& operator=(const CertificateBrokerImpl&) = delete;

  ~CertificateBrokerImpl() override;

  // mojom::CertificateBroker implementation:
  void GetCertificates(GetCertificatesCallback callback) override;

 private:
  static void OnClientCertsRetrieved(GetCertificatesCallback callback,
                                     net::ClientCertIdentityList client_certs);

  CreateClientCertStoreCallback create_client_cert_store_callback_;
};

}  // namespace remoting

#endif  // REMOTING_HOST_CERTIFICATE_BROKER_IMPL_H_
